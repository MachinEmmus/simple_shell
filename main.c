#include "shell.h"
/**
 *
 *
 *
 */

int main(void)
{
    char *path;
    char *getLine;
    char **tokens;
    char **path_tokens;
    pid_t child;
    int  status;
    int i = 0, loop = 1;
    
	while (loop == 1)
	{
        if (isatty(STDIN_FILENO))
		    write(1, "MiShell$ ", 9);
		getLine = get_line();
        if (getLine == NULL)
        {
            if (isatty(STDIN_FILENO))
                write(1, "\n", 1);
            break;
        }
        else
        {
			tokens = splitString(getLine);
			if (loop == 1)
				loop = get_command(tokens[0])(tokens);
            if (access(tokens[0], X_OK) != 0)
            {
				path = get_env("PATH");
                path_tokens = splitStringPath(path, tokens);
                i = 0;
 
                while (path_tokens[i] != NULL)
                {
         	   		if (access(path_tokens[i], X_OK) == 0)
         	       	{	
                   	 	child = fork();
  
                        if (child == -1)
                        {
                          	perror("error");
                              exit(0);
                          }
                          else if (child == 0)
                          {
                              if(execve(path_tokens[i], tokens, NULL) == -1)
                                  perror("error");
                              exit(1);
                              //path_tokens = h;
                         }
                          else
                             waitpid(-1, &status, 0);
                     }
                     i++;
                  }
            }
            else
            { 
            	printCommand(tokens);
             	free(tokens);
			}
		}
		free(tokens);
    }    
    free(getLine);
	return (0);
}


#include "shell.h"
/**
 *
 *
 *
 */

int main(int ac, char **av)
{
	struct stat st;
    //char *path;
    char *buffer;
    char **tokens;
    //char **path_tokens;
    int i = 0, loop = 1, reads = 0;
    
	while (loop == 1)
	{
		reads++;
        if (isatty(STDIN_FILENO))
		    write(1, "MiShell$ ", 9);
		signal(SIGINT, handleCtrlc);
		buffer = get_line();
        if (buffer == NULL || buffer == "")/*Aca hace falta un free*/
        {
            if (isatty(STDIN_FILENO))
                write(1, "\n", 1);
            break;
        }
        else
        {
			tokens = splitString(buffer);
			if (loop = get_command(tokens[0])(tokens) == 1)
			{	
				if (stat(tokens[0], &st) == 0)
            		childFork(tokens);
        		else 
				{
					/*Concatenar con el path y ver si se puede ejecutar*/
					/*errors(tokens, reads, av[0]);*/
        		}
			}
           	/*if (access(tokens[0], X_OK) != 0)
            {
				path = get_env("PATH");
				printf("%s\n", path);
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
			}*/
		}
		free(tokens);
		free(buffer);
    }    
	return (0);
}


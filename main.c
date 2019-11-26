#include "shell.h"
/**
 *
 *
 *
 */
int main(int ac, char **av, char **env)
{
    char *path;
    char *buffer;
    char **tokens;
    char **path_tokens;
    pid_t child;
    int  status;
    int i, loop = 1;
	while (loop != 0)
	{
		write(STDIN_FILENO, "Mameme_el_bolo_chulitos$ ", 25);
		buffer = get_line();
       	tokens = splitString(buffer);

		loop = get_command(tokens[0])(tokens);

       	if (access(tokens[0], X_OK) == 0)
       	{
           	printCommand(tokens);
           	free(tokens);
       	}
       	else
       	{
			i = 0;
			//env_prog(tokens);
			path = getenv("PATH");
           	path_tokens = splitStringPath(path, tokens);
           	while (*(path_tokens + i) != NULL)
           	{
               	if (access(*(path_tokens + i), X_OK) == 0)
               	{
                 	child = fork();
                   	if (child == -1)
                   	{
                       	perror("error");
                       	exit(0);
                   	}
                   	if (child == 0)
                   	{
                       	if(execve(*(path_tokens + i), tokens, NULL) == -1)
						{
                           	perror("error");
						}
                   	}
                   	else
					{
                       	waitpid(-1, &status, 0);
                   		//execve(path_tokens[i], tokens, NULL);
                   		//printCommand(path_tokens);
					}
					break;
               	} 
				i++;
			}
			free(path_tokens);
       	}
		free(tokens);
		free(buffer);
	}
	return (0);
}

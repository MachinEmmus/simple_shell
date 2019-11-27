#include "shell.h"
/**
 *
 *
 *
 */

int main(__attribute((unused))int ac,__attribute((unused))char **av)
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

		if (buffer == NULL)
		{
			printf("Entre aca\n");
			if (isatty(STDIN_FILENO))
				i = 1;
			continue;
		}
        if (i == 0)/*Aca hace falta un free*/
        {
			tokens = splitString(buffer);
			loop = get_command(tokens[0])(tokens);
			if (loop == 1)
			{	
				if (stat(tokens[0], &st) == 0)
				{
					if (access(tokens[0], X_OK) == 0)
					{
            			childFork(tokens);
					}
					else
						printf("Is a Directory\n");
				}
        		else 
				{
					//Concatenar con el path y ver si se puede ejecutar
					/*errors(tokens, reads, av[0]);*/
        		}
			}
			free(tokens);
		}
		free(buffer);
    }    
	return (0);
}


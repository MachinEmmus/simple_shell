#include "shell.h"
/**
 * main - Is the start to my program
 * @ac: is the count to arguments
 * @av: is the matrix to my arguments
 * Return: 0 always;
 */

int main(__attribute((unused))int ac, __attribute((unused))char **av)
{
	struct stat st;
	/*char *path = NULL;*/
	char *buffer;
	char **tokens;
	/*char **path_tokens;*/
int loop = 0, reads = 0;
	while (loop == 0)
	{
		reads++;
		if (isatty(STDIN_FILENO))
			write(STDIN_FILENO, "MiShell$ ", 9);
		signal(SIGINT, handleCtrlc);
		buffer = get_line();
		if (buffer == NULL)
		{
			if (isatty(STDIN_FILENO))
				write(STDOUT_FILENO, "\n", 1);
			continue;
		}
		else
		{
			tokens = splitString(buffer);
			loop = get_command(tokens[0])(tokens);
			if (loop == 0)
			{
				if (stat(tokens[0], &st) == 0)
					childFork(tokens);
				else
				{
					/* errors(tokens, reads, av[0]);free(path);*/
				}
			}
			free(tokens);
		}
		free(buffer);
	}
	return (0);
}


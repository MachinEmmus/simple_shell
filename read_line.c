#include "shell.h"
/**
 * get_line - Is my function to get a line and save in the buffer
 * Return: The string input
 */
char *get_line(void)
{
char *new_line = NULL;
size_t size = 0;
	fflush(stdin);
	if (getline(&new_line, &size, stdin) == EOF)
	{
		write(STDOUT_FILENO, "\n", 1);
		free(new_line);
		exit(0);
	}
	return (new_line);
}


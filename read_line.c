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
		free(new_line);
		exit(EXIT_FAILURE);
	}
	return (new_line);
}


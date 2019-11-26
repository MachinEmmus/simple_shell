#include "shell.h"
/**
 * get_line - read a line
 * Return: A string that has what the user typed
 */

char *get_line(void)
{
	char *new_line;
	size_t size = 0;

	fflush(stdin);
	if(getline(&new_line, &size, stdin) == -1)
	{
		free(new_line);
		return (NULL);
	} return (new_line);
}

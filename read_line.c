#include "shell.h"
/**
 * get_line - read a line
 * Return: A string that has what the user typed
 */

char *get_line(void)
{
	char *new_line;
	size_t size = 1024;

	new_line = malloc(size * sizeof(char));
	if (new_line == NULL)
		return (NULL);
	getline(&new_line, &size, stdin);

	return (new_line);
}

#include "shell.h"

/**
 * get_env - get the enviroment global
 * @path_name: string with path name
 *
 * Return: path
 */
char *get_env(const char *path_name)
{
	char **enviroment;
	char *delim = "=";
	char *token;
	int path;

	enviroment = environ;

	while (*enviroment)
	{
		token = strtok(*enviroment, delim);
		path = _strcmp(index, (char *) path_name);

		if (path == 0)
			return (strtok(NULL, delim));
		enviroment++;
	} return (NULL);
}

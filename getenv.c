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
	char *line  = NULL;
	int path;

	enviroment = environ;

	while (*enviroment)
	{
		line = str_concat("", *enviroment);
		token = strtok(line, delim);
		path = _strcmp(token, (char *) path_name);
		if (path == 0)
			return (strtok(NULL, delim));
		enviroment++;
	} return (NULL);
}

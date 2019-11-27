#include "shell.h"

/**
 * get_env - get path
 * @path_name: path to get
 *
 * Return: pointer
 *
 *
 */
char *get_env(const char *path_name)
{
	char *index;
	int path;
	char **enviroment;
	char *delimitator = "=";
	char *line = NULL;
	int i = 0;

	enviroment = environ;
	while (enviroment[i] != NULL)
	{
			line = _strdup(enviroment[i]);
			index = strtok(line, delimitator);
			path = _strcmp(index, (char *) path_name);
			/*if (_strcmp(index, (char *) path_name) == 0)*/
			if (path == 0)
			{
				strtok(NULL, delimitator);
				return (enviroment[i]);
				/*return ((strtok(NULL, delimitator)));*/
			}
			else
			{
				free(index);
			}
			/*enviroment++;*/
			i++;
	}
	return (NULL);
}

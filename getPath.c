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
char *command = "ls";
char *index;
int path;
char **enviroment;
char *deligual = "=";
char *delimtwo = ":";
char *tmp = NULL;
char *concatenate1 = NULL;
char *concatenate2 = NULL;
int i = 0;
	enviroment = environ;
	while (enviroment[i])
	{
		tmp = _strdup(enviroment[i]);
		index = strtok(tmp, deligual);
		path = _strcmp(index, (char *) path_name);
		/*if (_strcmp(index, (char *) path_name) == 0)*/
		if (path == 0)
		{
			while (index)
			{
				concatenate1 = str_concat(index, "/");
				concatenate2 = str_concat(concatenate1, command);
				if (access(concatenate2, X_OK) == 0)
				{
					printf("ejecutable");
					free(tmp);
					free(concatenate1);
					return (concatenate2);
				}
				free(concatenate1);
				free(concatenate2);
				index = strtok(NULL, delimtwo);
			}
		}
		free(tmp);
		i++;
	}
	return (NULL);
}

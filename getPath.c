#include "shell.h"

char *get_env(const char *path_name)
{
	char *index;
	int path;
	char **enviroment;
	char *delimitator = "=";
	char *line = NULL;
	/*int i = 0;*/

	enviroment = environ;
	/*line = strdup(*enviroment);*/

	while (*enviroment)
	{
			/*line = str_concat("", *enviroment);*/
			line = _strdup(*enviroment);
			/*line = _strcpy(line, *enviroment);*/
			index = strtok(line, delimitator);
			/*printf("%s\n", index);*/
			path = _strcmp(index, (char *) path_name);
			/*if (_strcmp(index, (char *) path_name) == 0)*/
			if(path == 0)
			{
				printf("line: %s\n\n", line);
				/*free(index);*/
				strtok(NULL, delimitator);
				return(*enviroment);
				/*return ((strtok(NULL, delimitator)));*/
			}
			else
			{
				free(index);
			}
			enviroment++;	
	}
	/*free(index);*/
	/*free(line);*/
	 return (NULL);
}

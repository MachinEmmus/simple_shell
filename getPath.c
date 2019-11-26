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


	while (*enviroment)
	{
			/*line = str_concat("", *enviroment);*/
			line = strdup(*enviroment);
			index = strtok(line, delimitator);

			path = _strcmp(index, (char *) path_name);
			if (path == 0)
			{
				printf("line: %s\n\n", line);
				return (strtok(NULL, delimitator));
			}
			else
			{
				free(line);
			}
			enviroment++;
			
	}
	 return (NULL);
}


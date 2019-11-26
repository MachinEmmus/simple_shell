#include "shell.h"

char *get_env(const char *path_name)
{
	/*index, will go throught the enviroment
	delimiting by '='*/
	char *index;

	/*path =  correct path*/
	int path;
        
	/*enviroment from the header, from the environ
	variable*/
	char **enviroment;
	
	char *delimitator = "=";

	char *line = NULL;
	//int  i = 0;
	enviroment = environ;


	/*whle enviroment can be traverse look for the correct
	index */
	while (*enviroment)
	{
			line = str_concat("", *enviroment);
			/*delimit the enviroment in  index*/
			index = strtok(line, delimitator);
			/*compare the index content with the path_name, 
			if is true return this adding null at the final
			
			else plus enviroment till fnd the correct name
			*/
			path = _strcmp(index, (char *) path_name);
			if (path == 0)
					return (strtok(NULL, delimitator));
			enviroment++;

			/*
			_strcmp(index, (char *) path_name) == 0 ? 
				return (strtok(NULL, delim)) : enviroment++;
			*/
	} return (NULL);
}


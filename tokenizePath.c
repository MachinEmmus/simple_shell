#include "shell.h"

char **splitStringPath(char *arguments, char **argvs)
{

        char *delimitador =  ":\n";
	int position = 0, arg_len = 1;
	char **tokens;
	char *token;
	char *str1;
	char *str2;

	arg_len = _strlen(arguments);
	tokens = malloc (arg_len * sizeof(char*));
	if (tokens == NULL)
		return(NULL);

	token = strtok(arguments, delimitador);
	while (token != NULL)
	{
		str1 = str_concat(token, "/");
		/*tokens[position] = str1;*/
		str2 = str_concat(str1, argvs[0]);

		tokens[position] = str2;
		position++;

		if (position >= arg_len)
		{
			arg_len += arg_len;
			tokens = realloc(tokens, arg_len * sizeof(char *));
			if (tokens == NULL)
				return(NULL);
		}
		token = strtok(NULL, delimitador);
	}
	tokens[position] = NULL;
	free(str1);
	return tokens;
}


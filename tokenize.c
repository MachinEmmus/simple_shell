#include "shell.h"
/**
 * splitString - tokenize the user input
 * @arguments: arguments from the stdin
 *
 * Return: double pointer
 */
char **splitString(char *arguments)
{
	char *delimitador = " \n:\t";
	int position = 0, arg_len = 1;
	char **tokens;
	char *token;

	arg_len = _strlen(arguments);
	tokens = malloc(arg_len * sizeof(char *));
	if (tokens == NULL)
		return (NULL);

	token = strtok(arguments, delimitador);
	while (token != NULL)
	{
		tokens[position] = token;
		position++;

		if (position >= arg_len)
		{
			arg_len += arg_len;
			tokens = realloc(tokens, arg_len * sizeof(char *));
			if (tokens == NULL)
				return (NULL);
		}
		token = strtok(NULL, delimitador);
	}
	tokens[position] = NULL;
	return (tokens);
}

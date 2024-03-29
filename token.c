#include "shell.h"
/**
 * splitStringPath - tokenize a pat and concatenate
 * @arguments: path from env
 * @argvs: tokens for the user input
 * Return: double pointer
 */
char **splitStringPath(char *arguments, char **argvs)
{
	char *delimitador =  ":\n\t";
	char **tokens;
	char *temp, *token, *slash = "/";
	int count = 0, arg_len = 1;

	arg_len = _strlen(arguments);
	temp = malloc(arg_len * sizeof(char *));
	if (temp == NULL)
		exit(1);

	temp = _strcpy(temp, arguments);
	token = strtok(arguments, delimitador);
	while (token != NULL)
	{
		count++;
		token = strtok(NULL, delimitador);
	}

	tokens = (char **) malloc((count + 1) * sizeof(char *));
	token = strtok(temp, delimitador);
	count = 0;

	while (token != NULL)
	{
		tokens[count] = (char *) _calloc((_strlen(token) + 3), sizeof(char));
		tokens[count] = _strcpy(tokens[count], token);
		tokens[count] = str_concat(tokens[count], slash);
		tokens[count] = str_concat(tokens[count], argvs[0]);
		count++;
		token = strtok(NULL, delimitador);
	}
	tokens[count] = NULL;
	free(temp);
	return (tokens);
}

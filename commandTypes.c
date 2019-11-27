#include "shell.h"
/**
 * exit_func - functions exit in our shell 
 * @tokens: input in the shell
 * Return: 1 or 0
 */

int exit_func(char **token)
{
	char *exit = "exit";
	if (_strcmp(token[0], exit) == 0)
	{
		printf("%s\n", "Function Exit");
		return (0);
	}
	return (1);
}

/**
 *
 *
 *
 */

int env_func(char **env)
{
	printf("%s\n", "Entre Aqui");
	int i = 0;
	char **enviroment = environ;
	while (*enviroment)
	{
		write(STDOUT_FILENO, enviroment[i], _strlen(enviroment[i]));
		write(STDOUT_FILENO, "/n", 1);
		i++;
	}
	return (1);
}

int nextstep(char **tokens)
{
	return (1);
}

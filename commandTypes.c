#include "shell.h"
/**
 * exit_func - functions exit in our shell
 * @token: input in the shell
 * Return: 1 or 0
 */

int exit_func(char **token)
{
	token = token;
	return (0);
}

/**
 * env_func - This function print the enviroment
 * @token: input of the user
 * Return: A status 1 to continue
 */

int env_func(char **token)
{
	char **env = environ;
	int i = 0;
	token = token;
	while (env[i] != NULL)
	{
		write(STDOUT_FILENO, env[i], _strlen(env[i]));
		write(STDOUT_FILENO, "\n", 1);
		i++;
	}
	return (1);
}
/**
 * nextstep - function to continue my program
 * @tokens: input of the user
 * Return: Always 1 to success and continue the program
 */
int nextstep(char **tokens)
{
	tokens = tokens;
	return (1);
}

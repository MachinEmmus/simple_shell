#include "shell.h"

/**
 * printCommand - execute a command
 * @tokens: command line
 *
 * Return: none
 */
void printCommand(char **tokens)
{
	pid_t child;
	int status;

	child = fork();

	if (child == -1)
	{
		perror("Error");
		exit(0);
	}
	else if (child == 0)
	{
		if (execve(tokens[0], tokens, NULL) == -1)
			perror("Error");
		exit(1);
	}
	else
		waitpid(-1, &status, 0);
}

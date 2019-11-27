#include "shell.h"
/**
 * childFork - Create a process son
 * @tokens: Thats input the user
 */

void childFork(char **tokens)
{
int status;
pid_t child;
	child = fork();
	if (child == -1)
	{
		perror("error");
		exit(0);
	}
	else if (child == 0)
	{
		if (execve(tokens[0], tokens, NULL) == -1)
			perror("error");
		exit(1);
	}
	else
		waitpid(-1, &status, 0);
}

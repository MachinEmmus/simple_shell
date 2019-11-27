#include "shell.h"
/**
 * errors - Print the command errors
 * @tokens: Is the input to the user
 * @interactions: Is the times to interactive shell
 * @argument: Is the name of the program
 */
void errors(char **tokens, int interactions, char *argument)
{
char *number = inttochar(interactions);
	write(STDOUT_FILENO, argument, _strlen(argument));
	write(STDOUT_FILENO, ": ", 2);
	write(STDOUT_FILENO, number, _strlen(number));
	write(STDOUT_FILENO, ": ", 2);
	write(STDOUT_FILENO, tokens[0], _strlen(tokens[0]));
	write(STDOUT_FILENO, ": ", 2);
	write(STDOUT_FILENO, "not found\n", 10);
}

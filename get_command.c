#include "shell.h"
/**
 * get_command - select correct command
 * @s: command input
 * Return: Pointer functions or NULL
 */

int (*get_command(char *s))(char **)
{
	s_func command[] = {
			{"env", env_func},
			{"exit", exit_func},
			{NULL, nextstep}
	};
int i = 0;
	if (s == NULL)
		return (command[2].func);
	while (i < 2)
	{
		if (_strcmp(command[i].str, s) == 0)
			return (command[i].func);
		i++;
	}
	return (command[2].func);
	/*return (NULL);*/
}

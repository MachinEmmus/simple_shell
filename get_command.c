#include "shell.h"
/**
 * get_command - select correct command
 * @s: command input
 * Return: Pointer functions or NULL
 */

int (*get_command(char *s))(char **)
{
	s_func command[] = {
			{"exit", exit_func},
			{"env", env_func},
			{NULL, NULL}
	};

	int i = 0;
	if (s == NULL)
		return (NULL);
	while (i < 2)
	{
		if (*s == command[i].str[0])
			return (command[i].func);
		i++;
	}
	return (NULL);
}

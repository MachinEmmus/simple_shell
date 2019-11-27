#include "shell.h"
/**
 * handleCtrlc - evit use Ctrl + C in our shell
 * @i: is the status
 */
void handleCtrlc(int i)
{
	i = i;
	write(STDOUT_FILENO, "\nMiShell$ ", 10);
	fflush(stdout);
}

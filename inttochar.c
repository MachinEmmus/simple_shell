#include "shell.h"
/**
 * 
 *
 *
 */
char *inttochar(int reads)
{
	int num, i, mod, len = 0;
	char s[4];
	char *str = s;
	num = reads;
	while (num != 0)
	{
		len++;
		num =  num / 10;
	}
	for (i = 0 ; i < len ; i++)
	{
		mod = reads % 10;
		reads = reads / 10;
		str[len - (i + 1)] = mod + '0';
	}
	str[len] = '\0';
	return (str);
}

#include "shell.h"
/**
 * str_concat - concatenute
 * @s1: String1
 * @s2: String2
 * Return: Char;
 */
char *str_concat(char *s1, char *s2)
{
	char s1Length = _strlen(s1);
	char s2Length = _strlen(s2);
	char length;
	int i;
	int count = 0;

	length  = (s1Length + s2Length) + 1;

	for (i = s1Length; i <= length; i++)
	{
		s1[i] = s2[count];
		count++;
	}
	s1[i] = '\0';
	return (s1);
}

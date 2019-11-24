#include "shell.h"

/**
 * str_concat - concatenate two strings
 * @s1: string
 * @s2: string
 *
 * Return: pointer to a string (str)
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0, h = 0, length = 0, lengthTotal = 0;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i])
		i++;
	length = i - 1, lengthTotal = length;
	i = 0;

	while (s2[i])
		i++;
	lengthTotal += i + 1;

	str = malloc(sizeof(char) * lengthTotal);
	if (str == NULL)
		return (NULL);
	
	for (i = 0; i <= lengthTotal + 1; count ++)
	{
		if (count > length)
			str[count] = s2[h], h++;
		else
			str[count] = s1[count];
	}
	return(str);
}

#include "holberton.h"

/**
 * rev_string - reverse string
 * @s: var char
 */

void rev_string(char *s)
{
	int i = 0;
	int j;
	char a, b;

	while (s[i] != '\0')
	{
		i++;
	}

	i--;

	for (j = 0; j <= i; j++)
	{
		a = s[j];
		b = s[i];
		s[i] = a;
		s[j] = b;
		i--;
	}
}

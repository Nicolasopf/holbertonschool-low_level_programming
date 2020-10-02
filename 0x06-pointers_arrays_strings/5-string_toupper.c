#include "holberton.h"

/**
 * string_toupper - converts to upper
 * @a: char text
 * Return: uppercase
 */

char *string_toupper(char *a)
{
	int i = 0;
	int j, x;

	while (a[i] != '\0')
		i++;

	for (x = 0; x < i; x++)
	{
		if (a[x] >= 'a' && a[x] <= 'z')
		{
			j = a[x];
			a[x] = j - 32;
		}
	}
	return (a);
}

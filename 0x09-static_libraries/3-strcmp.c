#include "holberton.h"

/**
 * _strcmp - compares two strings
 * @s1: string to compare
 * @s2: string to compare
 *
 * Return: comparation of strings
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int j, cmp;

	while (s1[i] != '\0')
		i++;
	for (j = 0; j < i; j++)
	{
		if (s1[j] == '\0' && s2[j] == '\0')
			return (0);
		if (s1[j] != s2[j] || s2[j] == '\0')
			break;
	}
	cmp = s1[j] - s2[j];
	return (cmp);
}

  
#include "holberton.h"

/**
 * _strcmp - difference between strings
 * @s1: string 1
 * @s2: string 2
 * Return: comparationr
 */

int _strcmp(char *s1, char *s2)
{

	int i = 0;
	int j, c;

	while (s1[i] != '\0')
		i++;

	for (j = 0; j < i; j++)
	{
		if (s1[j] == '\0' && s2[j] == '\0')
			return (0);
		if (s1[j] != s2[j] || s2[j] == '\0')
			break;
	}
	c = s1[j] - s2[j];
	return (cmp);
}

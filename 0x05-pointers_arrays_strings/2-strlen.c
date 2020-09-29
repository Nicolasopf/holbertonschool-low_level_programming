#include "holberton.h"

/**
 * _strlen - length of string
 *@s: char var
 * Return: length of string
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}

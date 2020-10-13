#include "holberton.h"
#include <stdlib.h>

/**
 * _strdup - function to duplicate a stirng
 * @str: string
 * Return: null or string
 */

char *_strdup(char *str)
{
	int a, b = 0;
	char *c;

	if (str == NULL)
		return (NULL);
	while (str[b])
		b++;

	c = malloc((sizeof(char) * b) + 1);
	if (c == NULL)
		return (NULL);
	for (a = 0; str[a]; a++)
		c[a] = str[a];
	c[a] = '\0';
	return (c);
}

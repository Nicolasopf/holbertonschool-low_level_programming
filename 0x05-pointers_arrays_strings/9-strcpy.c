#include "holberton.h"

/**
 * _strcpy - copy the string
 * @dest: destination
 * @src: source initial
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{

	int i;

	for (i = 0; src[i]; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = src[i];
	return (dest);
}

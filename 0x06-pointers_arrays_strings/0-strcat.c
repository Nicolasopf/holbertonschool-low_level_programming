#include "holberton.h"

/**
 * _strcat - string concatenate
 * @dest: destination
 * @src: source
 * Return: destination full
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;
	int h;
	char a;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

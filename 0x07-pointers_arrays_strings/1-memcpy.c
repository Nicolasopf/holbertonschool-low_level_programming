#include "holberton.h"

/**
 * _memcpy - copies memory data
 * @dest: destination
 * @src: source
 * @n: bytes
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		dest[a] = src[a];
	return (dest);
}

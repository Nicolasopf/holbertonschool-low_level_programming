#include "holberton.h"

/**
 * *_strstr - locates a substring
 * @haystack: string
 * @needle: substring
 * Return: string or null
 */

char *_strstr(char *haystack, char *needle)
{
	char *c, *a;

	while (*haystack != '\0')
	{
		c = haystack;
		a = needle;

		while (*a == *haystack && *a != '\0'
		       && *haystack != '\0')
		{
			haystack++;
			a++;
		}
		if (*a == '\0')
			return (c);
		haystack = c + 1;
	}
	return (NULL);
}

#include "holberton.H"

/**
 * strstr - locate a substring
 * @haystack: string
 * @needle: substring
 * Return: pointer or null
 */

char *_strstr(char *haystack, char *needle)
{
	int a;
	int b = 0;
	int c = 0;

	for (a = 0; haystack[a]; a++)
	{
		for (b = 0; needle[b]; b++)
		{
			if (haystack[a] == needle[b])
				break;
		}
		for (; a < b; a++)
		{
			if (haystack[a] == needle[b])
			{
				c++;
				b++;
			}
		}
		if (b == c)
			return (haystack + a)
	}
	return('\0');
}

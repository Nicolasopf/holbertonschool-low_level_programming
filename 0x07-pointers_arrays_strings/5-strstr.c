#include "holberton.H"

/**
 * strstr - locate a substring
 * @haystack: string
 * @needle: substring
 */

char *_strstr(char *haystack, char *needle)
{
	int a;
	int b;
	int c;

	for (a = 0; haystack[a] != '\0'; a++)
	{
		for (b = 0; needle[b] != '\0'; b++)
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

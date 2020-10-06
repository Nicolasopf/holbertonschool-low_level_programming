#include "holberton.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string
 * @accept: accepted
 * Return: length
 */

unsigned int _strspn(char *s, char *accept)
{
	int a;
	int b;
	unsigned int c;

	for (a = 0; (s[a] != '\0') && (s[a] != ' '); a++)
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
			{
				c++;
			}
		}
	}
	return (c);
}

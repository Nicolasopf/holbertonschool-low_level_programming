#include "holberton.h"

/**
 * *_strpbrk - main function.
 * @s: the address of memory to print
 * @accept: the size of the memory to print
 * Return: s.
 */

char *_strpbrk(char *s, char *accept)
{
	int a;

	while (*s)
	{
		for (a = 0; accept[a]; a++)
		{
			if (accept[a] == *s)
			{
				return (s);
			}
		}
		s++;
	}
	return (0);
}

#include "holberton.h"

/**
 * leet - encodes into 1337
 * @a: string
 * Return: a
 */

char *leet(char *a)
{
	int j = 0;
	int i;
	char let[] = {"aeotlAEOTL"};
	char sim[] = {"4307143071"};

	while (a[j] != '\0')
	{
		for (i = 0; let[i] != '\0'; i++)
		{
			if (a[j] == let[i])
			{
				a[j] = sim[i];
				break;
			}
		}
		j++;
	}
	return (a);
}

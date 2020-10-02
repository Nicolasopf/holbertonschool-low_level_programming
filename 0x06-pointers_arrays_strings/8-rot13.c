#include "holberton.h"

/**
 * rot13 -  encodes a string using rot13
 * @a: string to encode
 *
 * Return: string encoded.
 */

char *rot13(char *a)
{
	int i = 0;
	int j;
	char let[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char cod[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (a[i] != '\0')
	{
		for (j = 0; let[j] != '\0'; j++)
		{
			if (a[i] == let[j])
			{
				a[i] = cod[j];
				break;
			}
		}
		i++;
	}
	return (a);
}

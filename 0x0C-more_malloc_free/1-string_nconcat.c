#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * string_nconcat - concatenates two strings.
 * @s1: string to concatenate to.
 * @s2: string to concatenate from.
 * @n: bytes of s2 to concatenate.
 *
 * Return: a pointer to the concatenated string, NULL if it fails.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *con;
	unsigned int len1 = 0, len2 = 0, i, j;

	if (s1 != NULL)
	{
		while (s1[len1])
			len1++;
	}
	if (s2 != NULL)
	{
		while (s2[len2])
			len2++;
	}
	else
		s2 = "";
	if (n >= l2)
	{
		con = malloc((sizeof(char) * (len1 + len2)) + 1);
		if (con == NULL)
			return (NULL);
		for (i = 0; i < len1; i++)
			con[i] = s1[i];
		for (j = 0; j <= len2; j++)
			con[i++] = s2[j];
		return (con);
	}
	con = malloc((sizeof(char) * (len1 + n)) + 1);
	if (con == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		con[i] = s1[i];
	for (j = 0; j < n; j++)
		con[i++] = s2[j];
	con[i] = '\0';
	return (con);
}

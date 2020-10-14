#include "holberton.h"

/**
 * str_concat - Concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: pointer s to a new string or NULL if fails
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int leng1, leng2, leng3, i = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (leng1 = 0; s1[leng1]; leng1++)
	{}
	for (leng2 = 0; s2[leng2]; leng2++)
	{}
	s = malloc(sizeof(char) * (leng1 + leng2 + 1));
	if (s != NULL)
	{
		for (leng3 = 0; leng3 < leng1; leng3++)
		{
			s[leng3] = s1[leng3];
		}
		for (; leng3 <= (leng1 + leng2); leng3++)
		{
			s[leng3] = s2[i];
			i++;
		}
		return (s);
	}
	return (s);
}

#include "holberton.h"
#include <stdlib.h>

/**
 * words - counts the num of words in a string.
 * @s: string passed.
 * Return: numb of words.
 */
int words(char *s)
{
	int i, n = 0;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == ' ')
		{
			if (s[i + 1] != ' ' && s[i + 1] != '\0')
				n++;
		}
		else if (i == 0)
			n++;
	}
	n++;
	return (n);
}

/**
 * strtow - splits the string into words.
 * @str: string passed.
 * Return: pointer to an array of string.
 */
char **strtow(char *str)
{
	int i, j, k, l, n = 0, ch = 0;
	char **tokens;

	if (str == NULL || *str == '\0')
		return (NULL);
	n = words(str);
	if (n == 1)
		return (NULL);
	tokens = (char **)malloc(n * sizeof(char *));
	if (tokens == NULL)
		return (NULL);
	tokens[n - 1] = NULL;
	i = 0;
	while (str[i])
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			for (j = 1; str[i + j] != ' ' && str[i + j]; j++)
				;
			j++;
			tokens[ch] = (char *)malloc(j * sizeof(char));
			j--;
			if (tokens[ch] == NULL)
			{
				for (k = 0; k < ch; k++)
					free(tokens[k]);
				free(tokens[n - 1]);
				free(tokens);
				return (NULL);
			}
			for (l = 0; l < j; l++)
				tokens[ch][l] = str[i + l];
			tokens[ch][l] = '\0';
			ch++;
			i += j;
		}
		else
			i++;
	}
	return (tokens);
}

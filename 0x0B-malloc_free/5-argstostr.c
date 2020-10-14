#include "holberton.h"

/**
 * argstostr - Concatenates all the arguments of a program.
 * @ac: num of arguments
 * @av: argument content
 * Return: pointer s to a new string, NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	char *s;
	int i = 0, j = 0, l = 0, k = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	while (av[i])
	{
		while (av[i][j])
		{
			l++;
			j++;
		}
		i++;
	}
	s = malloc(l + ac + 1);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			s[k] = av[i][j];
			k++;
		}
		s[k] = '\n';
		k++;
	}
	s[k] = '\0';
	return (s);
}

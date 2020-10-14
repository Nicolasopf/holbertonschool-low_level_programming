#include "holberton.h"

/**
 * argstostr - Concatenates all the arguments of your program.
 * @ac: num of arguments
 * @av: content of arguments
 * Return: a pointer to a new string, or NULL if it fails.
 */

char *argstostr(int ac, char **av)
{
	char *arr;
	int i = 0, j, l = 0, p = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	while (av[i])
	{
		j = 0;
		while (av[i][j])
		{
			l++;
			j++;
		}
		i++;
	}
	arr = malloc(l + ac + 1);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			arr[p] = av[i][j];
			p++;
		}
		arr[p] = '\n';
		p++;
	}
	arr[p] = '\0';
	return (arr);
}

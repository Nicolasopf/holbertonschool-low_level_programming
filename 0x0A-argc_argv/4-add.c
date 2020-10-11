#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * main -  main func
 * @argc: argument count
 * @argv: argument vector
 * Description: adds number
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, d, j, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			d = atoi(argv[i]);
			for (j = 0; argv[i][j]; j++)
			{
				if (argv[i][j] < '0' || argv[i][j] > '9')
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += d;
		}
		printf("%d\n", sum);
	}
	return (0);
}

#include <stdio.h>

/**
 *main - computes and prints the sum of all the multiples of 3 or 5 below 1024
 *Return: 0 if success
 */

int main(void)
{
	int i = 0;
	int j;

	for (j = 0; j < 1024; j++)
	{
		if ((j % 3 == 0) || (j % 5 == 0))
			i = i + j;
	}
	printf("%d\n", i);
	return (0);
}

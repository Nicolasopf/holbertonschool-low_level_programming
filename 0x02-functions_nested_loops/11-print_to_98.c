#include "holberton.h"
#include <stdio.h>

/**
 *print_to_98 - prints all number form integer to 98
 *@a: integer
 */

void print_to_98(int a)
{
	while (a != 98)
	{
		printf("%d, ", a);
		if (a > 98)
		{
			a--;
		}
		else if (a < 98)
		{
			a++;
		}
	}
	printf("%d\n", 98);
}

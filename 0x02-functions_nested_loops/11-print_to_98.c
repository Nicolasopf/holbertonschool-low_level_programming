#include <stdio.h>

/**
 *print_to_98 - prints all number form integer to 98
 *@i: integer
 */

void print_to_98(int i)
{
	int a;

	if (i < 98)
	{
		for (a = i; a <= 98; a++)
		{
			if (a != 98)
				printf("%d, ", a);
			else
				printf("98\n");
		}
	}
	else if (i == 98)
	{
		printf("98\n");
	}
	else
	{
		for (a = i; a >= 98; a--)
		{
			if (a != 98)
				printf("%d, ", x);
			else
				printf("98\n");
		}
	}
}

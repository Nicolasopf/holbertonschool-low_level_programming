#include "holberton.h"

/**
 * more_numbers - print + numbers
 * Return: 0
 */

void more_numbers(void)
{

	int r;
	int b;
	int d = 0;

	for (r = 0; r <= 10; r++)
	{
		for (b = 0; b <= 9; b++)
		{
			if (b == 9 && d)
			{
				d++;
				;
			}
			_putchar(d + '0');
			_putchar(b + '0');
		}
		_putchar('\n');
	}
}

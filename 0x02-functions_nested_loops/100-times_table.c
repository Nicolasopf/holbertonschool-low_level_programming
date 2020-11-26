#include "holberton.h"

/**
 * last - lines to putchar.
 * @x: arg 1.
 * @n: arg 2.
 *
 */

void last(int i, int n)
{
	if (i == n)
		_putchar('\n');
	else
	{
		_putchar(',');
		_putchar(' ');
	}
}

/**
 * print_times_table - prints the table "m" times.
 * @n: integer passed to the function.
 */

void print_times_table(int n)
{
	int i, j, b, c, y, d;

	if (n <= 15 && n >= 0)
	{
		for (y = 0; y <= n; y++)
		{
			for (i = 0; i <= n; i++)
			{
				j = y * i;
				d = j % 10;
				if (j >= 0 && j <= 9)
				{
					if (i > 0)
					{
						_putchar(' ');
						_putchar(' ');
						_putchar(d + '0');
					}
					else
						_putchar(0 + '0');
				}
				else if (j >= 10 && j <= 99)
				{
					c = j / 10;
					_putchar(' ');
					_putchar(c + '0');
					_putchar(d + '0');
				}
				else
				{
					b = j / 100;
					c = (j - (b * 100)) / 10;
					_putchar(b + '0');
					_putchar(c + '0');
					_putchar(d + '0');
				}
				last(i, n);
			}
		}
	}
}

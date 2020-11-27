#include "holberton.h"

/**
 * last - format.
 * @x: integer 1
 * @n: integer 2
 */

void last(int x, int n)
{
	if (x == n)
		_putchar('\n');
	else
	{
		_putchar(',');
		_putchar(' ');
	}
}

/**
 * print_times_table - prints the table "n" times.
 * @n: integer 1.
 */

void print_times_table(int n)
{
	int x, a, b, c, y, d;

	if (n <= 15 && n >= 0)
	{
		for (y = 0; y <= n; y++)
		{
			for (x = 0; x <= n; x++)
			{
				a = y * x;
				d = a % 10;
				if (a >= 0 && a <= 9)
				{
					if (x > 0)
					{
						_putchar(' ');
						_putchar(' ');
						_putchar(d + '0');
					}
					else
						_putchar(0 + '0');
				}
				else if (a >= 10 && a <= 99)
				{
					c = a / 10;
					_putchar(' ');
					_putchar(c + '0');
					_putchar(d + '0');
				}
				else
				{
					b = a / 100;
					c = (a - (b * 100)) / 10;
					_putchar(b + '0');
					_putchar(c + '0');
					_putchar(d + '0');
				}
				last(x, n);
			}
		}
	}
}

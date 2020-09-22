  
#include "holberton.h"

/**
 *times_table - prints the 9 table
 */

void times_table(void)
{
	int m, l, r;

	for (m = 0; m < 10; m++)
	{
		for (l = 0; l < 10; l++)
		{
			r = m * l;

			if (r / 10 != 0)
			{
				if (l != 0)
				{
					_putchar(',');
					_putchar(' ');
				}
				_putchar(r / 10 + '0');
				_putchar(r % 10 + '0');
			}

			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(r + '0');
			}
		}
		_putchar ('\n');
	}
}

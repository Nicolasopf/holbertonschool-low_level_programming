#include "holberton.h"

/**
 * print_alphabet_x10 - Prints alphabet 10 times
 *
 *
 */


void print_alphabet_x10(void)
{
	int a;
	int r;

	for (r = 0; r <= 9; r++)
	{
		for (a = 97; a <= 122; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
	}
}

#include "holberton.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times
 *
 * Description: Calls _putchar for a nested loop to print the abc 10 times
 * 
 * Return: 1 or 0
 */

void print_alphabet_x10(void)
{
	int r;
	int c;

	for (r = 0; r <= 9; r++)
	{
		for (c = 97; c <= 122; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}

#include "holberton.h"

/**
 * print_numbers - print digit
 * Return: 0
 */

void print_numbers(void)
{
	int dig;

	for (dig = 48; dig < 58; dig++)
	{
		_putchar(dig);
	}
	_putchar('\n');
}

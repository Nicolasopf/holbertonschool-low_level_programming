#include "holberton.h"

/**
 *print_last_digit - print the last digit of a number
 *@r: number in var
 *Return: 0 Always
 */

int print_last_digit(int r)
{
	if (r > 0)
	{
		r = r % 10;
		_putchar(r + '0');
	}
	else
	{
		r = (r * 1) % 10;
		_putchar(r + '0');
	}
	return (r);
}

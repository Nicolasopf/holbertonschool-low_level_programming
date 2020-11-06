#include "holberton.h"

/**
 * print_binary - Prints the binary representation of a number
 * @n: number passed
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	if (n & 1)
	{
		_putchar('1');
		return;
	}
	else
	{
		_putchar('0');
		return;
	}
}

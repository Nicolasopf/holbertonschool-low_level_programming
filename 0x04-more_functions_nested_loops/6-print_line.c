#include "holberton.h"

/**
 * print_line - Prints a line
 * @n: times should be printed line
 * Return: 0 always
 */

void print_line(int n)
{

	int j;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (j = 0; j < n; j++)
	{
		_putchar('_');
	}
	_putchar('\n');
}

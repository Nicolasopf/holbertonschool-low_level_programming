#include "holberton.h"

/**
 * print_rev - print in reverse
 *@s: char value
 */

void print_rev(char *s)
{

	int i = 0;
	int x;

	while (s[i] != '\0')
		i++;
	for (x = i - 1; x >= 0; x--)
	{
		_putchar(s[x]);
	}
	_putchar('\n');
}

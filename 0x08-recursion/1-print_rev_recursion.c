#include "holberton.h"

/**
 * _print_rev_recursion - print a string in reverse
 * @s: string
 */

void _print_rev_recursion(char *s)
{
	int i = 0;

	if (s[i])
	{
		_print_rev_recursion(s + (i + 1));
		_putchar(s[i]);
	}
}

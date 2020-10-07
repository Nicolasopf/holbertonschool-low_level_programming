#include "holberton.h"

/**
 * _puts_recursion - put a string
 * @s: string
 */

void _puts_recursion(char *s)
{
	int i;

	if (s[i])
	{
		_putchar(s[i]);
		i++;
		_puts_recurson(s + i);
	}
	else
		_putchar('\n');
}

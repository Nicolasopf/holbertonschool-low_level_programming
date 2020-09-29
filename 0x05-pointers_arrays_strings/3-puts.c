#include "holberton.h"

/**
 * _puts - put a string
 *@str: char pointer
 * Return: 0
 */

void _puts(char *str)
{

	int i = 0;

	while (str[i] != '/0')
	{
		_putchar(str[i]);
		i++;
	}

}

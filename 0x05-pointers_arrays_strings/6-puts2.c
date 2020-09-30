#include "holberton.h"
/**
 * puts2 - prints every other character
 * @str: string
 * Return: 0
 */
void puts2(char *str)
{
	int i = 0, n;

	for (i = 0; str[i] != '\0'; i++)
	{
		n = i % 2;
		if (n == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}

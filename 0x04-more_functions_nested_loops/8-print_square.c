#include "holberton.h"
/**
 * print_square - prints the string "Holberton" from a character array.
 *@size: this is the variable
 * Return: 0 on success.
 */
void print_square(int size)
{
	int i;
	int j;

	if (size <= 0)
	{
		_putchar('\n');
	}

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
}

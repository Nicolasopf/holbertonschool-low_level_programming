#include "holberton.h"
/**
 *print_alphabet_x10 - prints the alphabet 10 times
 *
 *
 *Return: Always 0 - ok
 */
void print_alphabet_x10(void)
{
	int n = 0;

	while (n < 10)
	{
		print_alphabet();
		n++;
	}
}
/**
 *print_alphabet - prints the alphabet once
 */

void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c = c + 1;
	}
	_putchar('\n');
}

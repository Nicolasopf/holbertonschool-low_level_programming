#include <stdio.h>

/**
 * main - Entry point
 * Return: alphabet
 *
 */

int main(void)
{

	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	char c = 'A';

	while (c <= 'Z')
	{
		putchar(c);
		c++;
	}

	if (c > 'Z')
	{
		putchar ('\n');
	}

	return (0);

}

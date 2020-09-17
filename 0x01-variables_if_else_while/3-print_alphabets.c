#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Alphabet
 */
int main(void)
{

	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	ch = 'A';

	while (ch <= 'Z')
	{
		putchar(ch);
		ch++;

		if (ch > 'Z')
		{
			putchar('\n');
		}

	}

	return (0);
}

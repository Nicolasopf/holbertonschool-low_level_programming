#include <stdio.h>
/**
 * main - Entry point
 * Return: numbers
 *
 */

int main(void)
{
	int n;

	do {
		for (n = 0; n <= 9; n++)
			putchar(n + 48);
	} while (n < 9);
	putchar('\n');
return (0);
}

#include <stdio.h>

/**
 *main - Prints the first 50 Fibonacci numbers, starting with 1 and 2
 *Return: 0 if success
 */

int main(void)
{
	long num = 0, num1 = 0, num2 = 1;
	int i;

	for (i = 1; i <= 50; i++)
	{
		num = num1 + num2;
		num1 = num2;
		num2 = num;
		if (i != 50)
			printf("%ld, ", num);
		else
			printf("%ld\n", num);
	}
	return (0);
}

#include <stdio.h>

/**
 *main - Finds and prints the sum of the even-valued terms.
 *Return: 0 if success
 */

int main(void)
{
	int sum = 0, n = 0, n1 = 0, n2 = 1;

	while (n < 4000001)
	{
		n = n1 + n2;
		n1 = n2;
		n2 = n;
		if (n % 2 == 0)
			sum = n + sum;
	}
	printf("%d\n", sum);
	return (0);
}

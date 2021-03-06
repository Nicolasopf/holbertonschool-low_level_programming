#include "variadic_functions.h"

/**
 * sum_them_all - Sum all parameters passed
 * @n: Variables to sum
 * Return: sumatory of all parameters passed
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	unsigned int sum = 0;

	va_start(list, n);

	for (i = 0; i < n; i++)
		sum += va_arg(list, int);

	va_end(list);
	return (sum);
}

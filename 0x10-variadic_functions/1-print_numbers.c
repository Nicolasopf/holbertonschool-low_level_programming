#include "variadic_functions.h"

/**
 * print_numbers - Print numbers passed, and puts a separator
 * @separator: separator char to put between numbers
 * @n: numbers
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
		{
			printf("%d\n", va_arg(list, unsigned int));
		}
		if (separator == NULL)
		{
			printf("%d ", va_arg(list, unsigned int));
		}
		else
		{
		printf("%d%s", va_arg(list, unsigned int), separator);
		}
	}
	va_end(list);
}

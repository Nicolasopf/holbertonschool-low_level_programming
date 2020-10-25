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

	if (separator == NULL)
	{
		separator = "";
	}

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(list, unsigned int));
		if (i != n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}

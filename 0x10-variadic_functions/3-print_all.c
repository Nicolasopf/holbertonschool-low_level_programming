#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	va_list alist;
	type_t types[] = {
		{"c", p_char},
		{"i", p_int},
		{"f", p_float},
		{"s", p_string},
		{NULL, NULL}
	};
	int i = 0, j = 0;
	char *str = "";

	va_start(alist, format);
	while (format && format[i])
	{
		while (types[j].tp)
		{
			if (format[i] == *types[j].tp)
			{
				printf("%s", str);
				types[j].f(alist);
				str = ", ";
			}
			j++;
		}
		j = 0;
		i++;
	}
	printf("\n");
	va_end(alist);
}

/**
 * p_char - prints a character
 * @a: character to be printed
 */

void p_char(va_list a)
{
	printf("%c", va_arg(a, int));
}

/**
 * p_int - prints a character.
 * @a: character to be printed
 */

void p_int(va_list a)
{
	printf("%i", va_arg(a, int));
}

/**
 * p_float - prints a character.
 * @a: character to be printed
 */

void p_float(va_list a)
{
	printf("%f", va_arg(a, double));
}

/**
 * p_string - prints a character.
 * @a: character to be printed
 */

void p_string(va_list a)
{
	char *str;

	str = va_arg(a, char *);
	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}

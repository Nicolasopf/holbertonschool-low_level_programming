#ifndef _variadic_functions_h_
#define _variadic_functions_h_

#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct type - structure for types.
 * @tp: str type of char.
 * @f: pointer to function that prints.
 */

typedef struct type
{
	char *tp;
	void (*f)();
} type_t;

void p_char(va_list a);
void p_int(va_list a);
void p_float(va_list a);
void p_string(va_list a);

#endif /* _variadic_functions_h_ */

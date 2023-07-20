#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - A function that prints strings,
 * followed by a new line.
 * @separator: The string to be printed between the strings
 * @n: The number of string
 * @...: Extra parameters
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strs;
	char *str;
	unsigned int j;

	va_start(strs, n);

	for (j = 0; j < n; j++)
	{
	str = va_arg(strs, char *);
	if (str == NULL)
	printf("(nil)");
	else
	printf("%s", str);
	if (j != (n - 1) && separator != NULL)
	printf("%s", separator);
	}
	printf("\n");
	va_end(strs);
}

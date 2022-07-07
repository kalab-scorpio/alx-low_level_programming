#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - prints numbers using separator
 * @separator: character to be used to separate the int arguments
 * @n: number of arguments
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	char *var;
	unsigned int i;
	va_list args;

	if (separator == NULL)
		var = "";
	else
		var = (char *) separator;
	va_start(args, n);

	if (n > 0)
		printf("%d", va_arg(args, int));
	for (i = 1; i < n; i++)
		printf("%s%d", var, va_arg(args, int));
	printf("\n");
	va_end(args);
}

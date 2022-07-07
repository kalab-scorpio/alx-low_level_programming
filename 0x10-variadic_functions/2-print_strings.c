#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - prints n number of strings using separator in between
 * @separator: characters to be used for separation
 * @n: number of arguments
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	char *var, *ptr;
	unsigned int i;
	va_list args;

	if (separator == NULL)
		var = "";
	else
		var = (char *) separator;
	va_start(args, n);

	if (n > 0)
		printf("%s", va_arg(args, char *));
	for (i = 1; i < n; i++)
	{
		ptr = va_arg(args, char*);
		if (ptr == NULL)
			ptr = "(nil)";
		printf("%s%s", var, ptr);
	}
	printf("\n");
	va_end(args);
}

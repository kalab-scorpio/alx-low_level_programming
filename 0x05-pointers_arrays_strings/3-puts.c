/**
 * _puts - prints arrays
 * @str: the array of chars
 */
#include<string.h>
#include "main.h"

void _puts(char *str)
{
	int i;

	for (i = 0; i < (int)strlen(str); i++)
		_putchar(str[i]);
}

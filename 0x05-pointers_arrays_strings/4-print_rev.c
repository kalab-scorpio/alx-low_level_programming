/**
 * print_rev - print the array of char in reverse
 * @s: the array of char to be printed
 */
#include<string.h>
#include"main.h"

void print_rev(char *s)
{
	int i;

	for (i = strlen(s)-1; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}

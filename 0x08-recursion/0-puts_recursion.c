/**
 * _puts_recursion - prints string s
 * @s: char array to be printed
 */
#include "main.h"

int i = 0;

void _puts_recursion(char *s)
{
	if(s[i] == '\0')
		return;
	_putchar(s[i]);
	i++;

	_puts_recursion(s);
}

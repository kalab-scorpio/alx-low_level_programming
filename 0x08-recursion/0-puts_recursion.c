/**
 * _puts_recursion - prints string s
 * @s: char array to be printed
 */
#include "main.h"

void _puts_recursion(char *s)
{
	static int i = 0;

	if(s[i] == '\0')
		return;
	_putchar(s[i]);
	i++;

	_puts_recursion(s);
}

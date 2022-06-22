/**
 * _puts_recursion - prints string s
 * @s: char array to be printed
 */
#include "main.h"

void _puts_recursion(char *s)
{
	int i = 0;

	while(s[i] != '\0'){
		_putchar(s[i]);
		i++;
	}
}

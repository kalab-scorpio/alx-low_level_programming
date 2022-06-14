/**
 * puts_half - print's second half of str
 * @str: char array to be printed
 */
#include<string.h>
#include "main.h"

void puts_half(char *str)
{
	int i = (int)strlen(str) / 2;

	if ((int)strlen(str) % 2 == 1)
		i++;
	for (; i < (int)strlen(str); i++)
		_putchar(str[i]);
	_putchar('\n');
}

/**
 * puts2 - function that prints str jumping one at a time
 * @str: char array to be printed
 */
#include<string.h>
#include "main.h"

void puts2(char *str)
{
	int i = 0;

	for (; i < (int)strlen(str); i++)
	{
		if (i%2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}

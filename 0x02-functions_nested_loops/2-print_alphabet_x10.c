#include"main.h"

/**
 * print_alphabet_x10 - print alphabet in lowercase followed by a new line
 * Retutrn: 0 if it works correctly
 */

void print_alphabet_x10(void)
{
	int i, j;

	for (j = 1; j <= 10; j++)
	{
		for (i = 97; i <= 122; i++)
			_putchar(i);
		_putchar('\n');
	}
}
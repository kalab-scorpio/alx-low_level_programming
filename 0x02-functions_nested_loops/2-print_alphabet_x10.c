#include"main.h"

/**
 * print_alphabet - print alphabet in lowercase followed by a new line
 * Retutrn: 0 if it works correctly
 */

void print_alphabet(void)
{
	int i, j;
	
	for(j = 0; j<= 10; j++) {
		for (i = 97; i <= 122; i++)
			_putchar(i);
		_putchar('\n');
	}
}

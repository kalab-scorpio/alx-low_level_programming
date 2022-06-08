#include"main.h"

/**
 * print_alphabet - print alphabet in lowercase followed by a new line
 * Retutrn: 0 if it works correctly
 */

void times_table(void)
{
	int i;
	int n;
	int j;


	for (n = 0; n <= 9; n++)
	{
		for (i =0; i <= 9; i++)
		{
			j = n*i;
			_putchar(j);
			_putchr(',');
			_putchar(' ');
		}
		_putchar('\n');
	}


			
}

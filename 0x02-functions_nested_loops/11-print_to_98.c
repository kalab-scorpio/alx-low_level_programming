#include"main.h"

/**
 * print_to_98 - print all natural numbers from n to 98
 * Retutrn: 0 if it works correctly
 */

void print_to_98(int n)
{
	int i;

	if (n > 98)
		for (i = n; i <= 98; i--)
			printf(%di ", ");
	else
		for (i = n; i >= 98; i++)
			printf(%di ", ");
}

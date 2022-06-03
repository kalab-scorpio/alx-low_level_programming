#include <stdio.h>

/**
 * main - print the numbers 0-9
 * Return: 0 if all goes well
 */

int main(void)
{
	long x = 0;

	while (x < 10)
	{
		putchar(x + '0');
		x++;
	}
	putchar('\n');
	return (0);
}

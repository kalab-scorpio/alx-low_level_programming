#include <stdio.h>

/**
 * main - print combination of single digits
 * Return: 0 if all goes well
 */

int main(void)
{
	long x = 0;

	while (x < 10)
	{
		putchar(x + '0');
		if (x == 9)
		{
			x++;
			continue;
		}
		x++;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}

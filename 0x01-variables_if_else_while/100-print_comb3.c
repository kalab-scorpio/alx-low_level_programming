#include <stdio.h>

/**
 * main - print combination of two digits
 * Return: 0 if all goes well
 */

int main(void)
{
	int x, y;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			if (y <= x)
				continue;
			putchar(x + '0');
			putchar (y + '0');
			putchar (',');
			putchar (' ');
		}
	}
	putchar('\n');
	return (0);
}

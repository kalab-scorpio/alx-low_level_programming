#include <stdio.h>

/**
 * main - print combination of two digits
 * Return: 0 if all goes well
 */

int main(void)
{
	int x, y, z;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			for (z = 0; z <= 9; z++)
			{
				if (z <= y || y <= x)
					continue;
				putchar (x + '0');
				putchar (y + '0');
				putchar (z + '0');
				if (x == 7)
					continue;
				putchar (',');
				putchar (' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

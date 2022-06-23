#include <stdio.h>

/**
 * main - print combination of two digits
 * Return: 0 if all goes well
 */

int main(void)
{
	int x, y, z, i;

	for (i = 0; i <=9; i++)
	{
		for (x = 0; x <= 9; x++)
		{
			for (y = 0; y <= 9; y++)
			{
				for (z = 0; z <= 9; z++)
				{
					if (x <= z && i <= y)
						continue;
					if (z == y && y == x && x == i)
						continue;
					putchar (i + '0');
					putchar (x + '0');
					putchar (' ');
					putchar (y + '0');
					putchar (z + '0');
					if (i == 9 && x == 8)
						continue;
					putchar (',');
					putchar (' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

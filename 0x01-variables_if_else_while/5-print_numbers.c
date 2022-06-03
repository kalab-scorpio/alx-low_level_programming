#include <stdio.h>

/**
 * main - print the numbers 0-9
 * Return: 0 if all goes well
 */

int main(void)
{
	int x = 0;

	while (x < 10)
		printf("%d", x++);
	printf("\n");
	return (0);
}

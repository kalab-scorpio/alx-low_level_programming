#include <stdio.h>
#include <ctype.h>

/**
 * main - lower case alphabet
 * Return: 0 if all goes well
 */

int main(void)
{
	int x;

	for (x = 'A'; x <= 'Z'; x++)
		putchar(tolower(x));
	return (0);
}

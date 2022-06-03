#include <stdio.h>
#include <ctype.h>

/**
 * main - lower case alphabet
 * Return: 0 if all goes well
 */

int main(void)
{
	int x;

	for (x = '0'; x <= '9'; x++)
		putchar(x);
	for(x = 'A'; x <= 'F'; x++)
		putchar(tolower(x));
	putchar('\n');
	return (0);
}

#include "main.h"

/**
 * main - prints _putchar
 * Return: 0 if all goes well
 */

int main(void)
{
	char *word = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
		_putchar(word[i]);
	_putchar('\n');
	return(0);
}

#include "main.h"

/**
 * main - prints _putchar
 * Return: 0 if all goes well
 */

int main(void)
{
	char *word = "_putchar";
	for(int i = 0; i < 8; i++)
		_putchar(word[i]);
	_putchar('\n');
	return(0);
}

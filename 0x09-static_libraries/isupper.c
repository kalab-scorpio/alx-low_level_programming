#include <unistd.h>
#include "main.h"
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void _puts(char *s)
{
	int i = 0;

	for(; i < sizeof(*s); i++)
		_putchar(s[i]);
}

/**
 * _memset - function fills n bytes of s with constant byte b
 * @s: a char pointer to be filled by const variable b
 * @b: char data to be filled to s
 * @n:  the first bytes of memory area of s
 * Retrun: a pointer of s
 */
#include <string.h>

char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);
	return (s);
}

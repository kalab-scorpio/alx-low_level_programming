/**
 * _strspn - returns the number of byte that accept contained in s
 * @s: main string
 * @accept: string
 * Return: int
 */
#include <string.h>

unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}

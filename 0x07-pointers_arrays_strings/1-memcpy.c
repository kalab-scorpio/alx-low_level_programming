/**
 * _memcpy - function copies n bytes from src to dest
 * @dest: a var for data that is copied from src
 * @src: the source of data
 * @n: number of bytes to be copied from src to dest
 * Return: pointer of dest
 */
#include <string.h>

char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);
	return (dest);
}

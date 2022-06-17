/**
 * _strncat - concatinates dest and src with the n amount of src
 * @dest: char array for adding src to
 * @src: char array for the source the string
 * @n: the number of char to be copied from src
 * Return: It returns char array of the concatinated string
 */
#include<string.h>

char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}

/**
 * _strncpy - function that copies src to dest
 * @src: source of the string 
 * @dest: the destination of the string
 * @n: the amount of src to be copied to the dest
 * Return: char array the copied string
 */
#include<string.h>

char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}

/**
 * _strcat - string concatination
 * @dest: array of string for concatination
 * @src: source of string for concatination
 * Return: it returns char array of the dest + src
 */
#include<string.h>

char *_strcat(char *dest, char *src)
{
	return (strcat(dest, src));
}

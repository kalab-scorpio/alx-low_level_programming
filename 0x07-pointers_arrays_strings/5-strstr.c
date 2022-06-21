/**
 * _strstr - finds the occurrence of substring needle in haystack
 * @haystack: the main string
 * @needle: the string to search for in haystack
 * Return: pointer to the beginning of the located substring or NULL
 */
#include<string.h>

char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}

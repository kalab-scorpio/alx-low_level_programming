/**
 * _strchr - checks the first ocurrance of c in *s
 * @s: source of string
 * @c: character to look for in s
 * Return: the first occurrence of c in s or NULL
 */
#include<string.h>

char *_strchr(char *s, char c)
{
	return (strchr(s, c));
}

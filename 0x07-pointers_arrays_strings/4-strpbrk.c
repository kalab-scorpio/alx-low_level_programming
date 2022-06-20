/**
 * _strpbrk - locates teh first occurrence in s of any of the bytes in accept
 * @s: string s
 * @accept: str to check if s contains accept
 * Return: returns pointer of s
 */
#include <string.h>

char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}

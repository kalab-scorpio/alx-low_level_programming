#include<string.h>
#include<stdlib.h>

/**
 * str_concat - concatinates two strings s1 and s2
 * @s1: the first string to be concatinated
 * @s1: the second string to be concatinated
 * Return: a new char array with the value of s1 and s2 concatinated respectively
 */

char *str_concat(char *s1, char *s2)
{
	char *buffer;
	unsigned long int i = 0, s1_len = 0, s2_len = 0;

	if (s1 != NULL)
		s1_len = strlen(s1);
	if (s2 != NULL)
		s2_len = strlen(s2);

	buffer = malloc(s1_len + s2_len + 1);

	if (buffer == NULL)
		return (NULL);

	for (; i < (s1_len + s2_len); i++)
	{
		if (i < s1_len)
			buffer[i] = s1[i];
		else
			buffer[i] = s2[i - s1_len];
	}
	return (buffer);
}

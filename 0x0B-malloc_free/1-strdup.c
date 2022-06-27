/**
 * _strdup - creates a newly allocated space in memory and copy string to it
 * @str: the char array to be copied to the newly allocated space
 * Return: char array
 */
#include<string.h>
#include<stdlib.h>

char *_strdup(char *str)
{
	char *buffer = malloc(strlen(str) + 1);
	long unsigned int i = 0;	

	if (str == NULL || buffer == NULL)
		return (NULL);
	for (; i < strlen(str); i++)
		buffer[i] = str[i];
	return buffer;
}

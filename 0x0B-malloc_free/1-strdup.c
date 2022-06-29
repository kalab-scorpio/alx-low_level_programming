/**
 * _strdup - creates a newly allocated space in memory and copy string to it
 * @str: the char array to be copied to the newly allocated space
 * Return: char array
 */
#include<string.h>
#include<stdlib.h>

char *_strdup(char *str)
{
	char *buffer;
	long unsigned int i = 0;	
	
	if( str == NULL)
		return (NULL);

	buffer = malloc(strlen(str) + 1);

	if (buffer == NULL)
		return (NULL);

	for (; i < strlen(str); i++)
		buffer[i] = str[i];

	return buffer;
}

/**
 * _strdup - creates a newly allocated space in memory and copy string to it
 * @str: the char array to be copied to the newly allocated space
 * Return: char array
 */
#include<string.h>

char *_strdup(char *str)
{
	char *buffer = malloc(strlen(str));
	
	if (str == NULL || buffer == NULL)
		return (NULL);
	buffer = str;
	return buffer;
}

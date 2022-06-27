/**
 * create_array - creates an array of chars and initializes them
 * @size: the size of the array to be created
 * @c: the char array to be created
 * Return: the char array c
 */
#include<stdlib.h>

char *create_array(unsigned int size, char c)
{
	if (size == 0)
		return (NULL);

	char *buffer = malloc(size);
	unsigned int i = 0;

	if (buffer == NULL)
		return (NULL);
	for (; i < size; i++)
		buffer[i] = c;
	return (buffer);
}

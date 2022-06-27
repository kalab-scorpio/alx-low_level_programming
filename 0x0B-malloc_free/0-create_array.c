/**
 * create_array - creates an array of chars and initializes them
 * @size: the size of the array to be created
 * @c: the char array to be created
 * Return: the char array c
 */
#include<stdlib.h>

char *create_array(usigned int size, char c)
{
	char *buffer = malloc(size);
	
	buffer[0] = c;
	return (buffer);
}

#include<stdio.h>

/**
 * main - prints the name of the file it was compiled from 
 * Return: 0 if all goes well
 */

int main(void)
{
	printf("%c", __BASE_FILE__);
	return (0);
}

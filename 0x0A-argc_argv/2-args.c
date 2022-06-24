/**
 * main - prints it's name
 * @argc: number of arguments
 * @argv: array for holding the arguments
 * Return: 0 if all goes well
 */
#include<stdio.h>

int main(int argc, char *argv[])
{
	int i = 0;

	for (; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}

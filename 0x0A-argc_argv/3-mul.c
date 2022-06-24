/**
 * main - prints it's name
 * @argc: number of arguments
 * @argv: array for holding the arguments
 * Return: 0 if all goes well
 */
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int i = atoi(argv[1]);
		int j = atoi(argv[2]);

		printf("%d\n", i * j);
	}
	return (0);
}

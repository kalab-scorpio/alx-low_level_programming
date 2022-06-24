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
	int i = 1, sum = 0;

	if (argc > 1)
	{
		printf("Error\n");
		return (1);
	}
	else if (argc == 1)
		printf("%d\n", 0);
	else
	{
		for (; i < argc; i++)
		{
			int j = atoi(argv[i]);

			if (atoi(argv[i]) && j >= 0)
				sum += j;
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}

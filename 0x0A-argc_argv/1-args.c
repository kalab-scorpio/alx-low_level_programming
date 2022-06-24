/**
 * main - prints the nubmer of arguments
 * @argc: number of arguments
 * @argv: array for holding the arguments
 * Return: 0 if all goes well
 */
#include<stdio.h>

int main(int argc, char *argv[] __attribute__((unused)))
{

	printf("%d\n", argc - 1);
	return (0);
}

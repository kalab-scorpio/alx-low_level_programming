/**
 * main - prints it's name
 * @argc - number of arguments 
 * @argv - array for holding the arguments
 * Return - 0 if all goes well
 */
#include<stdio.h>

int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}

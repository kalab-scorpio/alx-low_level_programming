#include<stdio.h>

/**
 * main - print str to stderr
 * Return: 1 if all goes well
 */

int main(void)
{
	static const char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	fwrite(str, sizeof(str) - 1, 1, stderr);
	return (1);
}

/**
 * print_array - function to print array
 * @n: size of the array to be printed
 * @a: int array
 */
#include<stdio.h>

void print_array(int *a, int n)
{
	int i = 0;

	for(; i < n; i++)
	{
		printf("%d", a[i]);
		if(i != n - 1)
			printf(", ");
	}
}

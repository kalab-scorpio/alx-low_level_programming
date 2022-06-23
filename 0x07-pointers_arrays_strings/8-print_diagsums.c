/**
 * print_diagsums - prints the sum of the two diagonals of a matrix
 * @a: the array that holds the square matrix
 * @size: the size of the square matrix
 */
#include <stdio.h>

void print_diagsums(int *a, int size)
{
	int sum = 0, sum2 = 0, row, col;

	for (row = 0; row < size; row++)
	{
		for (col = 0; col < size; col++) 
		{
			if (row == col)
				printf("a[%d][%d] = %d\n", row, col, *(*(a + row) + col) );
			sum = sum + sum2;
			/*else if (row + col == size)
				sum2 += *(*(a + row) + col);*/
		}
	}
	/*printf("%d, %d", sum, sum2);*/
}


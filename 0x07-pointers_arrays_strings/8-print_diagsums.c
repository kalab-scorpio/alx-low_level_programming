/**
 * print_diagsums - prints the sum of the two diagonals of a matrix
 * @a: the array that holds the square matrix
 * @size: the size of the square matrix
 */

void print_diagsums(int *a, int size)
{
	int sum = 0, sum2 = 0, row, col;

	for (row = 0; row < size; row++)
	{
		for (col = 0; col < size; col++) 
		{
			if (row == col)
				sum += a[row][col];
			else if (row + col == size)
				sum2 += a[row][col];
		}
	}
	printf("%d, %d", sum, sum2);
}


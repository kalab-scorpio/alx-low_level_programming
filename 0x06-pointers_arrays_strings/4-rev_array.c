/**
 * reverse-array - functions that reverses teh content of an array of integers
 * @a: the array of integerst to be reversed
 * @n: the number of element of array
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int *b;
        *b = *a;

	for(; i < n; i++)
		a[i] = b[n-i-1];
}

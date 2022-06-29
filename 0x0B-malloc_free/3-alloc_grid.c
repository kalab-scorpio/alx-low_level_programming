#include <stdlib.h>

/**
 * alloc_grid - creates 2 dimensional array of integers
 * @width: width of the array
 * @height: height of the array
 * Return: a 2 dimensional array
 */

int **alloc_grid(int width, int height)
{
	int **arr = (int**)malloc(sizeof(int*) * height + sizeof(int) * width * height);
	int *ptr = (int *)(arr + height);
	int i = 0;

	for(; i < height; i++)
        	arr[i] = (ptr + width * i);

	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}

	return (arr);
}

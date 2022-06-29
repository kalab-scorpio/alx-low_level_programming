#include <stdlib.h>

/**
 * alloc_grid - creates 2 dimensional array of integers
 * @width: width of the array
 * @height: height of the array
 * Return: a 2 dimensional array
 */

int **alloc_grid(int width, int height)
{
	int **arr;
	int *ptr;
	int i = 0;
	
	if (width <= 0 && height <= 0)
		return (NULL);
	
	arr = (int**)malloc(sizeof(int*) * height + sizeof(int) * width * height);

	if (arr == NULL)
		return (NULL);
	
	ptr = (int*)(arr + height);

	for(; i < height; i++)
        	arr[i] = (ptr + width * i);

	return (arr);
}

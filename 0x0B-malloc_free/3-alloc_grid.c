/**
 * alloc_grid - creates 2 dimensional array of integers
 * @width: width of the array
 * @height: height of the array
 * Return: a 2 dimensional array
 */

int **alloc_grid(int width, int height)
{
	int **arr = (int**)malloc(sizeof(int*) * r + sizeof(int) * c * r);
	
	if(arr == NULL)
		return (NULL);

	return (arr);
}

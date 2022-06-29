/**
 * alloc_grid - frees the array grid
 * @grid: memory location to be freed
 * @height: the height of grid
 */
#include<stdlib.h>

void free_grid(int **grid, int height)
{
	int i;

	for(i = 0; i < height; i++)
        	grid[i] = NULL;

	free(grid);
}

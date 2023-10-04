#include "main.h"
/**
 * free_grid - frees the memory allocated to array grid.
 * @grid: a pointer to the array to be freed.
 * @height: the height of the array (number of rows).
 *
 * Return: a pointer to the created array, or NULL on filure.
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}

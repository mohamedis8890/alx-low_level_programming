#include "main.h"
/**
 * alloc_grid - creates a 2 dimensional array of integers, filled with zeros.
 * @width: the width of the array (number of columns).
 * @height: the height of the array (number of rows).
 *
 * Return: a pointer to the created array, or NULL on filure.
 */
int **alloc_grid(int width, int height)
{
	int **array;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	array = (int **)malloc(sizeof(int *) * height);
	if (array == NULL)
		return (NULL);

	/**
	 * A 2D array is an array of arrays! so we need to malloc every
	 * array of the inner arrays and roll back if an malloc fails
	 */
	for (i = 0; i < height; i++)
	{
		array[i] = (int *)malloc(sizeof(int) * width);
		if (array[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(array[i]);
			free(array);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			array[i][j] = 0;
		}
	}
	return (array);
}

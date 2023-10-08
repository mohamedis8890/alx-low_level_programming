#include "main.h"
/**
 * array_range - creates an array range of integers.
 * @min: minimum range value.
 * @max: maximum range value.
 *
 * Return: a pointer to the array range
 * , or NULL on failure.
 */
int *array_range(int min, int max)
{
	int i = 0;
	int *range;

	if (min > max)
		return (NULL);

	range = malloc(sizeof(int) * (max - min + 1));
	if (range == NULL)
		return (NULL);

	while (min <= max)
	{
		*(range + i) = min;
		min++;
		i++;
	}

	return (range);
}

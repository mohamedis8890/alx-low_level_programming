#include <stdlib.h>

/**
 * array_iterator - executes @action on each element of an array.
 *
 * @array: the array.
 * @size: @array length
 * @action: a pointer to the function to execute
 * Return: void.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && size > 0 && action)
		for (i = 0; i < size; i++)
			action(array[i]);
}

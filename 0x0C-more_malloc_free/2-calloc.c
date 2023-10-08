#include "main.h"
/**
 * _calloc - allocates memory for an array.
 * @nmemb: number of array members.
 * @size: size of each member.
 *
 * Return: a pointer to the allocated memory
 * , or NULL on failure.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *array;
	unsigned int space;

	if (nmemb == 0 || size == 0)
		return (NULL);

	space = nmemb * size;

	array = malloc(space);
	if (array == NULL)
		return (NULL);

	while (space--)
		array[space] = 0;

	return (array);
}

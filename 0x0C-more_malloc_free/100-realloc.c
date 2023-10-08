#include "main.h"
/**
 * _realloc - reallocates a memory block.
 * @ptr: pointer to the memory previously allocated with a call to malloc.
 * @old_size: the size, in bytes, of the allocated space for @ptr.
 * @new_size: the new size, in bytes of the new memory block.
 *
 * Return: a pointer to the array range
 * , or NULL on failure.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int diff;
	unsigned int i;
	char *start = ptr;
	char *new_ptr;

	if (old_size == new_size)
		return (ptr);

	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
			return (NULL);

		return (new_ptr);
	}

	if (new_size > old_size)
	{
		diff = new_size - old_size;
	}
	else
		diff = 0;

	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);

	for (i = 0; i < new_size; i++)
	{
		if (diff != 0 && i == diff)
			break;
		*(new_ptr + i) = *(start + i);
	}

	return (new_ptr);
}

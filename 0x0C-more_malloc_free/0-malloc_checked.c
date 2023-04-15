#include "main.h"
#include <stdlib.h>
#include <unistd.h>

/**
 * malloc_checked - allocates memory using malloc, f malloc fails, the
 * malloc_checked function should cause normal process termination with
 * a status value of 98
 *
 * @b: the size of memory to allocate
 *
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *m;

	m = malloc(b);

	if (m == NULL)
		exit(98);

	return (m);
}

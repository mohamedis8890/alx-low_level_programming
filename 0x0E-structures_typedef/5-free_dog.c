#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - free memory areaa that has a dog structure
 * @d: a pointer to the struct
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{

		free(d->name);
		free(d->owner);
		free(d);
	}
}

#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a dog structure and initializes its values
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: a pointer to the created structure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	if (name == NULL || owner == NULL)
		return (NULL);

	d = malloc(sizeof(dog_t));

	if (d == NULL)
		return (NULL);

	d->name = name;
	d->age = age;
	d->owner = owner;

	return (d);
}

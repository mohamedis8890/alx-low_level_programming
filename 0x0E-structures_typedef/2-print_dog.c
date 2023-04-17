#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints a dog structure to stdio
 * @d: a pointer to the struct
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name == NULL)
			printf("Name: (nil)");
		else
			printf("Name: %s\n", d->name);

		if (d->age == 0)
			printf("Age: (nil)");
		else
			printf("Age: %f\n", d->age);

		if (d->owner == NULL)
			printf("Age: (nil)");
		else
			printf("Owner: %s\n", d->owner);
	}
}
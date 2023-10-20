#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list
 * @h: a pointer to the head of the list
 *
 * Return: the number of nodes.
 */
size_t print_list(const list_t *h)
{
	int i;

	i = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%zu] %s\n", strlen(h->str), h->str);

		h = h->next;
		i++;
	}

	return (i);
}

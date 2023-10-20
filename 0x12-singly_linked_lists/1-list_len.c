#include "lists.h"

/**
 * list_len - the number of elements in a linked list
 * @h: a pointer to the head of the list
 *
 * Return: the number of nodes.
 */
size_t list_len(const list_t *h)
{
	size_t i;

	i = 0;
	while (h != NULL)
	{
		h = h->next;
		i++;
	}

	return (i);
}

#include "lists.h"
#include <stddef.h>

/**
 * listint_len - gets the number of elements in a list
 * @h: a pointer to the head of the list
 *
 * Return: the number of nodes.
 */
size_t listint_len(const listint_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}

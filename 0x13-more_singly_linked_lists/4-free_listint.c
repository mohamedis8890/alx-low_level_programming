#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees a list
 * @head: a pointer to the head of the list
 *
 * Return: nothing.
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp);
	}
}

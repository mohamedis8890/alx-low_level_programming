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

	if (head == NULL)
		return;

	temp = head;

	while (temp->next != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}

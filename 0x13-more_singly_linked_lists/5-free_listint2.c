#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees a list and sets head to null.
 * @head: a pointer to the head of the list
 *
 * Return: nothing.
 */

void free_listint2(listint_t **head)
{

	listint_t *temp, *current;

	if (*head == NULL)
	{
		return;
	}

	temp = *head;
	current = temp;

	while (current != NULL)
	{
		temp = current->next;
		free(current);
		current = temp;
	}

	*head = NULL;
}

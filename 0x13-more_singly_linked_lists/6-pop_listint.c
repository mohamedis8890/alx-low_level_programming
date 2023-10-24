#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a listint_t linked list,
 * and returns the head node’s data (n).
 * @head: a pointer to the head of the list
 *
 * Return: the head node’s data.
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;

	temp = *head;

	n = temp->n;

	*head = temp->next;

	free(temp);
	return (n);
}

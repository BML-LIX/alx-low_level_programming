#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a listint_t linked list,
 * and returns the head nodes's data
 * @head: head of linked list
 * Return: the head node’s data (n).
 */

int pop_listint(listint_t **head)
{
	listint_t *now;
	int n;

	if (head == NULL)
		return (0);

	now = *head;
	if (now == NULL)
		return (0);

	n = now->n;
	*head = now->next;
	free(now);
	return (n);
}

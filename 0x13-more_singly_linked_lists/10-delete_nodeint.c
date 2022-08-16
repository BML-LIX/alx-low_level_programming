#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * delete_nodeint_at_index - deletes a node at a given position.
 * @head: head of linked list
 * @index: index to delete
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *now;
	listint_t *n;

	if (head == NULL || (*head) == NULL)
		return (-1);

	now = *head;
	if (index == 0)
	{
		if ((*head)->next)
			(*head) = (*head)->next;
		else
			(*head) = NULL;
		free(now);
		return (1);
	}

	while (index != 1)
	{
		if (now->next == NULL)
			return (-1);

		now = now->next;
		--index;
	}
	n = now->next;
	if (now->next->next)
		now->next = now->next;
	else
		now->next = NULL;
	free(n);

	return (1);
}

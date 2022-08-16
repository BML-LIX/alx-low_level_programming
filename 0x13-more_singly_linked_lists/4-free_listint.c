#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: head of linked list
 */
void free_listint(listint_t *head)
{
	listint_t *now;
	listint_t *next;

	now = head;

	while (now != NULL)
	{
		next = now->next;
		free(now);
		now = next;
	}
}

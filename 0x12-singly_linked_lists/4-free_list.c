#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: head of linked list
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *now;
	list_t *n;

	now = head;

	while (now != NULL)
	{
		n = now->next;
		free(now->str);
		free(now);
		now = n;
	}
}

#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end - add a node at the end of a linked list
 * @head: character to print
 * @n: new node string
 *
 * Return: new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *now;
	listint_t *new_nod;

	now = *head;
	while (now && now->next != NULL)
		now = now->next;

	new_nod = malloc(sizeof(listint_t));
	if (new_nod == NULL)
	{
		free(new_nod);
		return (NULL);
	}
	new_nod->n = n;
	new_nod->next = NULL;

	if (now)
		now->next = new_nod;
	else
		*head = new_nod;
	return (new_nod);
}

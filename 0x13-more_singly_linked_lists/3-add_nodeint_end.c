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
	listint_t *new-nod;

	now = *head;
	while (now && now->next != NULL)
		now = now->next;

	new-nod = malloc(sizeof(listint_t));
	if (new-nod == NULL)
	{
		free(new-nod);
		return (NULL);
	}
	new-nod->n = n;
	new-nod->next = NULL;

	if (now)
		now->next = new-nod;
	else
		*head = new-nod;
	return (new-nod);
}

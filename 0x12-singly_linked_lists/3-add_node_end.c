#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of linked list
 * @head: character to print
 * @str: string for new node
 * Return: new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *now;
	list_t *new;
	int n;

	now = *head;
	while (now && now->next != NULL)
		now = now->next;
	for (n = 0; str[n] != '\0'; n++)
		;
	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->str = strdup(str);

	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->next = NULL;
new->len = n;

	if (now)
		now->next = new;
	else
		*head = new;
	return (new);
}

#include <string.h>
#include "lists.h"

/**
 * *add_node - adds a new node at the beginning of a linked list
 * @head: linked list head
 * @str: string element of the linked list
 * Return: number of elements
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int strlen;

	new = (list_t *) malloc(sizeof(list_t));

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
	for (strlen = 0; str[strlen] != '\0';  strlen++)
	;
	new->len = strlen;
	new->next = *head;
	*head = new;
	return (new);
}

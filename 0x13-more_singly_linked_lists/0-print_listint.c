#include <stdio.h>
#include "lists.h"

/**
 * print_listint - print all the elements of lisyint_list
 * @h: linked list
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *now = h;
	size_t num_nods = 0;

	while (now != NULL)
	{
		printf("%i\n", now->n);
		now = now->next;
		num_nods++;
	}
	return (num_nods);
}

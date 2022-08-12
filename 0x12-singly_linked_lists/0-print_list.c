#include <stdio.h>
#include "lists.h"

/**
 * print_list - print elements of linked list (list_h)
 * @h: linked list
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t nm_nodes = 0;
	const list_t *nw = h;

	while (nw != NULL)
	{
		printf("[%d] %s\n", nw->len,
		nw->str != NULL ? nw->str : "[0] (nil)");
		nw = nw->next;
		nm_nodes++;
	}
	return (nm_nodes);
}

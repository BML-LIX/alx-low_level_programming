#include <stdio.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list (list_t)
 * @h: linked list
 *
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t nm_element = 0;
	const list_t *nw = h;

	while (nw != NULL)
	{
		nw = nw->next;
		nm_element++;
	}
	return (nm_element);
}

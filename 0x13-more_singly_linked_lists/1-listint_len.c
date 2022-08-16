#include <stdio.h>
#include "list.h"

/**
 * listint_len - returns the number of elements in a linked list.
 * @h: linked list
 *
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t num_nods = 0;
	const listint_t *now = h;

	while (now != NULL)
	{
		now = now->next;
		num_nods++;
	}
	return (num_nods);
}

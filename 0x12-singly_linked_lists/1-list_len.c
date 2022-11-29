#include "lists.h"

/**
 * list_len - prints  number of elements of a list
 * @h: pointer to list
 *
 * Return: the number of nodes
 */

size_t list_len(const list_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}

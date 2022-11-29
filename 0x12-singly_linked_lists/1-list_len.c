#include "lists.h"

/**
 * list_len - prints all elements of a list
 * @h: head
 *
 * Return: the number of nodes
 */

size_t list_len(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{

		nodes++;
		h = h->next;
	}
	return (nodes);
}

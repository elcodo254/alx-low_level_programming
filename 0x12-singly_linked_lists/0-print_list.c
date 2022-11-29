#include "lists.h"

/**
 * print_list - prints all elements of a list
 * @h: list
 *
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t nodes = 0;
	*h = head;

	while (h)
	{
		h = h->next;

		if (h->str == NULL)
			printf("[0] (nil)");

		else
			printf("[%d] %s\n", h->len, h->str);

		nodes++;
	}
	return (nodes);
}

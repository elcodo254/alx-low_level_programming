#include "lists.h"

/**
 * print_list - prints all elements of a list
 * @h: head
 *
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{

		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");

		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
		nodes++;
	}
	return (nodes);
}

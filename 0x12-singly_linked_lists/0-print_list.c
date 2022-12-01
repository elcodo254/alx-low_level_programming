#include "lists.h"

/**
 * print_list - prints all elements of a linked list
 * @h: pointer to the list
 *
 * Return: number of nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t count;

	while (h)
	{
		count++;
		if (h->str == NULL)
			printf("[%u] %s\n", 0, "(nil)");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
	}
	return (count);
}

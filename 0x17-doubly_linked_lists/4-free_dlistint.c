#include "lists.h"

/**
 * free_dlistint - free list
 * @head: pointer
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	if (!head)
		return;
	while (head)
	{
		current = head;
		head = head->next;

		free(current);
	}
	free(head);
}

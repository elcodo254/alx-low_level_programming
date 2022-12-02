#include "lists.h"

/**
 * get_nodeint_at_index - gets the nth node of a list
 * @index: index of the node
 * @head: head
 *
 * Return: node otherwise NULL if node doesn't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index, i++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}

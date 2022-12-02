#include "lists.h"

/**
 * insert_nodeint_at_index - insert new node at a given position
 *
 * @head: double pointer to head
 * @idx: index of where new node should be added
 * @n: value of new node
 *
 * Return: NULL if failed to add new node otherwise address of new node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *copy = *head;
	unsigned int i;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	if (idx == 0)
	{
		new->next = copy;
		*head = new;
		return (new);
	}

	for (i = 0; i < (idx - 1); i++)
	{
		if (copy == NULL || copy->next == NULL)
			return (NULL);
		copy = copy->next;
	}
	new->next = copy->next;
	copy->next = new;

	return (new);
}

#include "lists.h"

/**
 * insert_dnodeint_at_index - insert new node at a given position
 * @h: double pointer to list
 * @idx: index
 * @n: number element
 * Return: address of new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = NULL, *tmp = NULL;
	unsigned int i = 1;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL || h == NULL)
		return (NULL);
	new->n = n;
	tmp = *h;

	if (idx == 0)
		return (add_dnodeint(h, n));

	while (tmp->next)
	{
		if (i == idx)
		{
			new->prev = tmp;
			new->next = tmp->next;
			tmp->next->prev = new;
		}
		tmp = tmp->next;
		i++;
	}
	if (i == idx)
		return (add_dnodeint_end(h, n));
	if (i < idx)
	{
		free(new);
		return (NULL);
	}
	return (new);
}

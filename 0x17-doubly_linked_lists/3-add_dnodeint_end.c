#include "lists.h"

/**
 * add_dnodeint_end - add node at the end
 * @head: double pointer
 * @n: number of elements
 * Return: address of new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *tmp;

	new = malloc(sizeof(dlisint_t));
	if (new)
		return (NULL);

	new->n = n;
	new->next = NULL;
	tmp = *head;
	if(!(tmp))
	{
		new->prev = NULL;
		*head = new;
	}
	else
	{
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = new;
		new->prev = tmp;
	}
	return (new);
}

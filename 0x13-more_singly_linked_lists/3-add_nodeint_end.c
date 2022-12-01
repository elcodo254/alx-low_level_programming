#include "lists.h"

/**
 * add_nodeint_end - add node at end of list
 * @head: head
 * @n: integer in new node
 *
 * Return: NULL if failure otherwise address of new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *p;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		p = *head;
		while (p->next != NULL)
		{
			p = p->next;
		}
		p->next = new;
	}
	return (*head);
}

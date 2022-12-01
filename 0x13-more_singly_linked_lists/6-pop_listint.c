#include "lists.h"

/**
 * pop_listint - deletes head node of a list
 * @head: double pointer to head
 *
 * Return: head node's data
 */
int pop_listint(listint_t **head)
{
	int rmhead = -1;
	listint_t *nextnode = NULL;

	if (*head == NULL)
		return (-1);

	nextnode = (*head)->next;
	rmhead = (*head)->n;
	free(*head);
	*head = nextnode;

	return (rmhead);
}

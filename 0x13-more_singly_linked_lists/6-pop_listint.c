#include "lists.h"

/**
 * pop_listint - deletes head node of a list
 * @head: double pointer to head
 *
 * Return: head node's data
 */
int pop_listint(listint_t **head)
{
	int rmhead;
	listint_t *nextnode;

	if (*head == NULL)
		return (0);

	nextnode = *head;
	rmhead = (*head)->n;
	*head = (*head)->next;

	free(nextnode);

	return (rmhead);
}

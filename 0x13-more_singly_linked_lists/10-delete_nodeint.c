#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at index of a list
 *
 * @head: double pointer to head
 * @index: index of the node to be deleted
 *
 * Return: 1(success) otherwise -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *temp, *copy = *head;

	if (copy == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(copy);
		return (1);
	}

	for (i = 0; i < index - 1; i++)
	{
		if (copy->next == NULL)
			return (-1);
		copy = copy->next;
	}
	temp = copy->next;
	copy->next = temp->next;
	free(temp);

	return (1);
}

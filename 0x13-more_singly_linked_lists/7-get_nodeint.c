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
	int i = 0;
	listint_t *tempnode;

	if (!index)
		return (0);

	while (head->next != NULL && i <= index)
	{
		head = head->next;
		i++;
	}
	tempnode = head->next;
	head->next = tempnode->next;
	return (tempnode);
}

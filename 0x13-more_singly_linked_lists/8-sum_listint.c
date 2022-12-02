#include "lists.h"

/**
 * sum_listint - sum ass the data of a list
 * @head: pointer to node
 *
 * Return: 0 if list is empty otherwise sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next
	}
	return (sum);
}


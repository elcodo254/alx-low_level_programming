#include "lists.h"

/**
 * sum_dlistint - return sum of data in list
 * @head: pointer
 * Return: sum of all data(n)
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (!head)
		return (sum);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}

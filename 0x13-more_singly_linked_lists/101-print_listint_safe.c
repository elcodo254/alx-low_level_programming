#include "lists.h"

size_t looped_listint_len(const listint_t *head);

/**
 * looped_listint_len - counts number of nodes in a looped list
 * @head: pointer to head
 *
 * Return: if list looped-number of unique codes otherwise 0
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *step, *twostep;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	step = head->next;
	twostep = (head->next)->next;

	while (twostep)
	{
		if (step == twostep)
		{
			step = head;
			while (step != twostep)
			{
				nodes++;
				step = step->next;
				twostep = twostep->next;
			}
			step = step->next;
			while (step != twostep)
			{
				nodes++;
				step = step->next;
			}
			return (nodes);
		}
		step = step->next;
		twostep = (twostep->next)->next;
	}
	return (0);
}


/**
 * print_listint_safe - prints list with a loop
 * @head: head
 * Return: number of nodes in the list otherwise exit with status 98 if fail
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, i = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (i = 0; i < nodes; i++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (nodes);
}



#include "lists.h"

/**
 * sum_listint - A function that returns the sum of all
 * the data (n) of a listint_t linked list
 * @head: Pointer to the first node
 * Return: Sum of all n(s)
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	listint_t *node = head;

	while (node)
	{
	sum += node->n;
	node = node->next;
	}

	return (sum);
}

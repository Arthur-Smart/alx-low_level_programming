#include "lists.h"
#include <stdio.h>

/**
 * print_listint - A function that prints all
 * the elements of a listint_t list.
 * @h: A pointer to a node
 * Return: The number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t num_of_nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		num_of_nodes++;
		h = h->next;
	}

	return (num_of_nodes);
}

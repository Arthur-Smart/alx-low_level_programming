#include "lists.h"

/**
 * listint_len - A function that returns the number
 * of elements in a linked listint_t list.
 * @h: A pointer to a node
 * Return: Number of elements in the list
 */

size_t listint_len(const listint_t *h)
{
	size_t num_of_el = 0;

	while (h != NULL)
	{
	num_of_el++;
	h = h->next;
	}

	return (num_of_el);
}

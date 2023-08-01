#include "lists.h"

/**
 * get_nodeint_at_index - A function that returns the
 * nth node of a listint_t linked list
 * @head: The initial node
 * @index: Index of the node to return
 * Return: The node we are looking for
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int j;

	listint_t *node = head;

	while (j < index)
	{
	node = node->next;
	j++;
	}

	if (node)
	{
	return (node);
	}
	else
	{
	return (NULL);
	}
}

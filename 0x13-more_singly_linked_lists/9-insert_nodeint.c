#include "lists.h"

/**
 * insert_nodeint_at_index - A function that inserts
 * a new node at a given position
 * @head: The fist node in the list pointer
 * @idx: The index of the list where the new
 * node should be added
 * @n: Data to pass to the new node
 * Return: The address of the new node, or NULL
 * if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int j;

	listint_t *current_node = *head;
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (!new_node || !head)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
	new_node->next = *head;
	*head = new_node;
	return (new_node);
	}

	for (j = 0; current_node && j < idx; j++)
	{
	if (j == idx - 1)
	{
	new_node->next = current_node->next;
	current_node->next = new_node;
	return (new_node);
	}
	else
	{
	current_node = current_node->next;
	}
	}

	return (NULL);
	
}

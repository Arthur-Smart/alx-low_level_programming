#include "lists.h"

/**
 * delete_nodeint_at_index - A function that deletes the
 * node at index index of a listint_t linked list
 * @head: Initial node pointer
 * @index: Index of the node to be deleted from the list
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *new_node = *head;
	listint_t *current_node = NULL;
	unsigned int j = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(new_node);
		return (1);
	}

	while (j < index - 1)
	{
		if (!new_node || !(new_node->next))
			return (-1);
		new_node  = new_node->next;
		j++;
	}


	current_node = new_node->next;
	new_node->next = current_node->next;
	free(current_node);

	return (1);
}

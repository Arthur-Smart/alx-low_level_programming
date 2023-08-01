#include "lists.h"

/**
 * free_listint2 - A function that frees a listint_t list.
 * @head: Pointer to be freed
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *current;

	if (head == NULL)
		return;

	while (*head)
	{
	current = (*head)->next;
	free(*head);
	*head = current;
	}

	*head = NULL;
}

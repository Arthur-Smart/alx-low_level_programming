#include "lists.h"

/**
 * pop_listint - A function that deletes the head node of
 * a listint_t linked list, and returns the
 * head node’s data (n)
 * @head: A point to the address of the first element in
 * the list
 * Return: Always 0 (Success)
 */

int pop_listint(listint_t **head)
{
	listint_t *current;
	int data;

	if (!*head)
		return (0);

	data = (*head)->n;
	current = (*head)->next;
	free(*head);
	*head = current;

	return (data);
}



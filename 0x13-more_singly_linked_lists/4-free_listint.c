#include "lists.h"

/**
 * free_listint - A function that frees a listint_t list.
 * @head: listint_t instance to be freed
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *current;

        while (head)
        {
        current = head->next;
        free(head);
        head = current;
        }
}

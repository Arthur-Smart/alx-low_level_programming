#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - A function that adds a new
 * node at the end of a list_t list.
 * @head: A pointer to a pointer
 * @str: String to be duplicated
 * Return: address of the new element,
 * or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_el;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	new_el = malloc(sizeof(list_t));
	if (!new_el)
		return (NULL);

	new_el->str = strdup(str);
	new_el->len = len;
	new_el->next = NULL;

	if (*head == NULL)
	{
		*head = new_el;
		return (new_el);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new_el;

	return (new_el);
}


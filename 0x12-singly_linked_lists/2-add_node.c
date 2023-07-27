#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - A function that adds a new node
 * at the beginning of a list_t list.
 * @head: This is a double pointer
 * @str: A string to be duplicated
 * Return: address of the new element,
 * or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_el;
	unsigned int len = 0;

	while (str[len])
		len++;

	new_el = malloc(sizeof(list_t));
	if (!new_el)
		return (NULL);

	new_el->str = strdup(str);
	new_el->len = len;
	new_el->next = (*head);
	(*head) = new_el;

	return (*head);
}


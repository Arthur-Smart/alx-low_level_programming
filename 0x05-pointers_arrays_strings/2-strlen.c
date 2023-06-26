#include <stdio.h>

/**
 * int _strlen - A function that
 * returns the length of a string
 * @str: The string being checked
 * Return: The lenght of str
 */

size_t  _strlen(const char *s)
{
	int length = 0;

	while (*s++)
	length++;
	return (length);
}

	

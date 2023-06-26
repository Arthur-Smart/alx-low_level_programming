#include <stdio.h>

/**
 * int _strlen - A function that
 * returns the length of a string
 * @str: The string being checked
 * Return: The lenght of str
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	length++;
	s++;
	return (length);
}

	

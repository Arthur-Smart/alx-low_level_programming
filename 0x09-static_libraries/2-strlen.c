#include <stdio.h>

/**
 *_strlen - A function that
 * returns the length of a string
 * @s: The string being checked
 * Return: The lenght of str
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s++)
	length++;
	return (length);
}

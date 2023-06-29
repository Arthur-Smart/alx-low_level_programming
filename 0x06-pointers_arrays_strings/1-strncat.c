#include "main.h"

/**
 * _strnca - A function that concatenates
 * two strings
 * @n: Bytes number
 * @src: String to add
 * @dest: Point of adding
 * Return: A pointer to the resulting string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, len = 0;

	while (dest[i++])
	len++;
	for (i = 0; src[i] && i < n; i++)
	dest[len++] = src[len];
	return (dest);
}

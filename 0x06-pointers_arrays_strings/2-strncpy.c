#include "main.h"

/**
 * _strncpy - A function that copies a string
 * @dest: The place where string is
 * stored
 * @src: Source string
 * @n: The number of bytes copied
 * Return: Dest pointer
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, len = 0;

	while (src[i++])
	len++;

	for (i = 0; src[i] && i < n; i++)
	dest[i] = src[i];
	for (i = len; i < n; i++)
	dest[i] = '\0';
	return (dest);
}

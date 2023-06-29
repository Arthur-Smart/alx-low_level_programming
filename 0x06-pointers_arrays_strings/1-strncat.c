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
	int i;
	int k;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	k = 0;
	while (k < n && src[k] != '\0')
	{
	dest[i] = src[k];
	i++;
	k++;
	}
	dest[i] = '\0';
	return (dest);
}

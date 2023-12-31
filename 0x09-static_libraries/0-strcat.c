#include "main.h"
#include <stdio.h>

/**
 * _strcat - A function that concatenates
 * two strings
 * @src: Origin
 * @dest: Destination
 * Return: pointer to the resulting string
 */

char *_strcat(char *dest, char *src)
{
	int len = 0, j;

	while (dest[len])
	{
	len++;
	}
	for (j = 0; src[j] != 0; j++)
	{
	dest[len] = src[j];
	len++;
	}
	dest[len] = '\0';
	return (dest);
}

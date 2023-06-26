#include "main.h"

/**
 * _strcpy - A function that copies `the string pointed
 * from src to dest
 * @dest: Final place
 * @src: Initial place
 *  Return: The  pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int s;
	
	for (s = 0; src[s] != '\0'; s++)
	{
	dest[s] = src[s];
	}
	dest[s++] = '\0';
	return (dest);
}

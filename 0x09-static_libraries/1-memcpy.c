#include "main.h"

/**
 * _memcpy - A unction that copies
 * memory area.
 * @dest: Final position
 * @src: Intial position
 * @n: Bytes in account
 * Return: A pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	dest[a] = src[a];
	return (dest);
}

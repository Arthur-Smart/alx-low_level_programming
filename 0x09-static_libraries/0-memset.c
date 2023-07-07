#include "main.h"

/**
 * _memset - A function that fills
 * memory with a constant byte
 * @s: address
 * @n: Bytes taken in account
 * @b: Constant byte
 * Return: Always 0 (Success)
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	s[a] = b;
	return (s);
}

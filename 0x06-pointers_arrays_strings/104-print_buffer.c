#include "main.h"
#include <stdio.h>

/**
 * print_buffer - A function that prints a buffer.
 * @b: The buffer used
 * @size: size
 * Return: void
 */

void print_buffer(char *b, int size)
{
	int a, k, c;

	a = 0;

	if (size <= 0)
	{
	printf("\n");
	return;
	}
	while (a < size)
	{
	k = size - a < 10 ? size - a : 10;
	printf("%08x: ", a);
	for (c = 0; c < 10; c++)
	{
	if (c < k)
	printf("%02x", *(b + a + c));
	else
	printf("  ");
	if (c % 2)
	{
	printf(" ");
	}
	}
	for (c = 0; c < k; c++)
	{
	int i = *(b + a + c);

	if (i < 32 || i > 132)
	{
	i = '.';
	}
	printf("%i", i);
	}
	printf("\n");
	a += 10;
	}
}


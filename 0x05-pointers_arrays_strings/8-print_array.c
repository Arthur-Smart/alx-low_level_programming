#include "main.h"
#include <stdio.h>

/**
 * print_array - A function that prints n element
 * of an array of integers, followed by a new line
 * @a: Integers
 * @n: The number of elements of the array to be printed
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
	printf("%d", a[i]);
	if (i < n - 1)
	{
	printf(", ");
	}
	}
	printf("\n");
}

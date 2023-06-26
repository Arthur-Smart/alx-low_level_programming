#include <stdio.h>

/**
 * swap_int - a function that swaps the
 * values of two integers
 * @a: The first integer
 * @b: The second integer
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int swap_ints = *a;
	*a = *b;
	*b = swap_ints;
}


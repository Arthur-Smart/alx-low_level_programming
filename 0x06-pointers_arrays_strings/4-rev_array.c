#include "main.h"

/**
 * reverse_array - A function that reverses the
 * content of an array of integers
 * @a: Array of integers
 * @n: The number of elements of the array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int temp, i;

	for (i = n - 1; i >= n / 2; i--)
	{
	temp = a[n - 1 - i];
	a[n - 1 - i] = a[i];
	a[i] = temp;
	}
}

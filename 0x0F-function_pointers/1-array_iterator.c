#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - a function that executes a
 * function given as a parameter on each
 * element of an array
 * @array: array
 * @size: Size of the array
 * @action: A pointer to the function needed
 * * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int j;

	if (array == NULL || action == NULL)
		return;

	for (j = 0; j < size; j++)
	{
		action(array[j]);
	}
}

#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer
 * @array: array
 * @size: The number of elements in the array 
 * @cmp: A pointer to the function to be used to
 * compare values
 * Return: -1 if size <= 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int j;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (j = 0; j < size; j++)
	{
		if (cmp(array[j]))
			return (j);
	}
	return (-1);
}

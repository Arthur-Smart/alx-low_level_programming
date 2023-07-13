#include "main.h"
#include <stdlib.h>

/**
 * array_range - A  function that creates an
 * array of integers
 * @min: The minimum value stored
 * @max: The maximum value stored
 * Return: The pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *j , k = 0;

	if (min > max)
		return (NULL);
	j = malloc((sizeof(int) * (max - min)) + sizeof(int));

	if (j == NULL)
		return (NULL);
	while (min <= max)
	{
		j[k] = min;
		k++;
		min++;
	}

	return (j);
}

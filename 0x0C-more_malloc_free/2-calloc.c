#include "main.h"
#include <stdlib.h>

/**
 * _calloc - A function that allocates memory for
 * an array, using malloc.
 * @nmemb: Number of elements
 * @size: Bytes
 * Return: Pointer or NULL if malloc fails
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int k = 0, j = 0;
	char *ptr;

	if (nmemb == 0 || size == 0)
		return NULL;

	j = nmemb * size;
	ptr =  malloc(j);

	if (ptr == NULL)
		return (NULL);
	while (k < j)
	{
		ptr[k] = 0;
		k++;
	}
	return (ptr);
}

#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - A  function that returns a pointer
 * to a 2 dimensional array of integers
 * @width: widthvalue
 * @height: height value
 * Return: NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int **s;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	s = malloc(sizeof(int *) * height);

	if (s == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		s[i] = malloc(sizeof(int) * width);

		if (s[i] == NULL)
		{
			for (; i >= 0; i--)
				free(s[i]);

			free(s);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			s[i][j] = 0;
	}

	return (s);
}


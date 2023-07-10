#include "main.h"
#include <stdlib.h>

/**
 * create_array - A function that creates an array
 * of chars, and initializes it with a specific char
 * @size: The array size
 * @c: The character to be added in the array
 * Return: A pointer to array or NULL
 */

char *create_array(unsigned int size, char c)
{       
        unsigned int j;
        char *i;
        
        if (size == 0)
        {       
        return (NULL);
        }
        i = malloc(size * sizeof(char));
        if (i == NULL)
        {       
        return (NULL);
        }       
        for (j = 0; j < size; j++)
	{
	i[j] = c;
	}
	return (i);
}    

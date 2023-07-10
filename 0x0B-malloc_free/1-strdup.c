#include "main.h"
#include <stdlib.h>

/**
 * _strdup - A function that returns a pointer to a newly
 * allocated space in memory, which contains a copy of
 * the string given as a parameter
 * @str: The copied string
 * Return: The copied string or NULL
 */

char *_strdup(char *str)
{       
        int j = 0, i = 1;
        char *a;
        
        if (str == NULL)
                return (NULL);
        while (str[i])
	{
	i++;
	}
	a = malloc((sizeof(char) * i) + 1);

	if (a == NULL)
		return (NULL);
	while (j < i)
	{
	a[j] = str[j];
	j++;
	}
	a[j] = '\0';
	return (a);
}	

#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - A function that converts a
 * binary number to an unsigned int
 * @b:A string pointing to a strin
 * of 0 and 1 chars
 * Return: The  converted number, or 0
 */

unsigned int binary_to_uint(const char *b)
{
	int k;
	unsigned int num_value = 0;

	if (b == NULL)
	{
        return 0;
    	}

	for (k = 0; b[k]; k++)
	{
	if (b[k] < '0' || b[k] > '1')
	return (0);
	num_value = 2 * num_value + (b[k] - '0');
	}
	return (num_value);
}

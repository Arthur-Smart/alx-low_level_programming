#include "main.h"

/**
 * flip_bits - A function that returns the number of
 * bits you would need to flip to get from one
 * number to another.
 * @n: The first bit value
 * @m: The second bit value
 * Return: Number of bit to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int j = 0; 
	int value = 0;
	unsigned long int pre_value;
	unsigned long int result_val = n ^ m;

	for (j = 63; j >= 0; j--)
	{
	pre_value = (result_val >> j);
	if (pre_value & 1)
	{
	value++;
	}
	}
	return (value);
}

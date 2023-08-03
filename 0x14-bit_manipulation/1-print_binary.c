#include "main.h"

/**
 * print_binary - A function that prints the
 * binary representation of a number.
 * @n: The number in context
 * Return: void
 */

void print_binary(unsigned long int n)
{
	int j = 0;
	int value = 0;
	unsigned long int pre_state;

	for (j = 63; j >= 0; j--)
	{
	pre_state = n >> j;
	if (pre_state & 1)
	{
	_putchar('1');
	value++;
	}
	else if (value)
	_putchar('0');
	}
	if (!value)
	{
	_putchar('0');
	}
}

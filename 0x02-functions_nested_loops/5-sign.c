#include "main.h"

/**
 * print_sign - printing the sign of a number
 * @n: The number that is checked
 * Return: 1 if number is positive, 0 if number is zero
 * and -1 if number is less than zero
*/

int print_sign(int n)
{
	if (n > 0)
	{
	_putchar('+');
	return (1);
	}
	else if (n == 0)
	{
	_putchar('0');
	return (0);
	}
	else
	{
	_putchar('-');
	return (-1);
	}
}

#include "main.h"
#include <stdio.h>

/**
 * print_numbe -  A funtion that prints an
 * integer
 * @n: Integer being printed
 * Return: void
 */

void print_number(int n)
{
	int a = n;

	if (n = 0)
	{
	n *= -1;
	a = n;
	_putchar('_');
	}
	a /= 10;
	if (a != 0)
	print_number(a);
	_putchar((int) n % 10 + '0');
}

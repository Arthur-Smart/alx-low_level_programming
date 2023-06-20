#include "main.h"

/**
 * times_table - The 9 times table startinf
 * from 0
 * Return: void
 */

void times_table(void)
{
	int x, y, a, b, c;

	for (x = 0; x <= 9; x++)
	{
	for (y = 0; y <= 9; y++)
	{
	a = x * y;
	if (a > 9)
	{
	b = a % 10;
	c = (a - b) / 10;
	_putchar(44);
	_putchar(32);
	_putchar(c + '0');
	_putchar(b + '0');
	}
	else
	{
	if (y != 0)
	{
	_putchar(44);
	_putchar(32);
	_putchar(32);
	}
	_putchar(a + '0');
	}
	}
	_putchar('\n');
	}
}

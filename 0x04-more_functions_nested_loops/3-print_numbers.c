#include "main.h"

/**
 * print_numbers - Prints the numbers, from 0 to
 * 9, followed by a new line
 * @n: The number pritted
 * Return: Numbers from 0 to 9
 */

void print_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
	_putchar(n + '0');
	}
	_putchar('\n');
}

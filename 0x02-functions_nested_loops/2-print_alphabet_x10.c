#include "main.h"

/**
 * print_alphabet_x10(void) - 10x times alphabet results
 *Return: void
 */

void print_alphabet_x10(void)
{
	char e;
	int i = 0;

	while (i <= 9)
	{
	for (e = 'a'; e <= 'z'; e++)
	{
	_putchar(e);
	}
	_putchar('\n');
	i++;
	}
}

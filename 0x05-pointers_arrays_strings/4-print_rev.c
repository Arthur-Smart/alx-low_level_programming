#include "main.h"
#include <stdio.h>

/**
 * print_rev - A function that prints a string,
 * in reverse, followed by a new line.
 * @s: The string used
 * Return: void
 */

void print_rev(char *s)
{
	int str = 0;

	while (s[str] != '\0')
	{
	str++;
	}

	for (str -= 1; str >= 0; str--)
	{
	_putchar(s[str]);
	}
	_putchar('\n');
}

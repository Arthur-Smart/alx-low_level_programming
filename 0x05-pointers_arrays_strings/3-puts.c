#include "main.h"

/**
 * _puts - A function that prints a string,
 * followed by a new line, to stdout.
 * @str: The string
 * Return: void
 */

void _puts(char *str)
{
	for(; *str != '\0'; str++)
	{
	_putchar(*str);
	}
	_putchar('\n');
}

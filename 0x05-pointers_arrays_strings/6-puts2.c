#include "main.h"

/**
 * puts2 - A function that prints every other
 * character of a string, starting with the
 * first character, followed by a new line.
 * @str: The string used
 * Return: void
 */

void puts2(char *str)
{
	int i;
	int s = 0;

	while (str[s] != '\0')
	{
	s++;
	}

	for (i = 0; i < s; i += 2)
	{
	_putchar(str[i]);
	}
	_putchar('\n');
}


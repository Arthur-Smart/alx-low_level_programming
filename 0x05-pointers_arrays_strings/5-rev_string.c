#include "main.h"

/**
 * rev_string - A function that
 * reverses a string
 * @s: The string reversed
 * Return: void
 */

void rev_string(char *s)
{
	int l = 0, i = 0;
	char temp;

	while (s[i++])
	l++;

	for (i = l - 1; i >= l / 2; i--)
	{
	temp = s[i];
	s[i] = s[l - i - 1];
	s[l - i - 1] = temp;
	}
}

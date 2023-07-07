#include "main.h"

/**
 * _atoi - A function that convert a string
 * to an integer
 * @s: The pointer in account
 * Return: Integer
 */

int _atoi(char *s)
{
	int a = 0;
	unsigned int val1 = 0;
	int min = 1;
	int i = 0;

	while (s[a])
	{
	if (s[a] == 45)
	{
	min *= -1;
	}
	while (s[a] >= 48 && s[a] <= 57)
	{
	i = 1;
	val1 = (val1 * 10) + (s[a] - '0');
	a++;
	}
	if (i == 1)
	{
	break;
	}
	a++;
	}
	val1 *= min;
	return (val1);
}

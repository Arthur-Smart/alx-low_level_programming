#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - A function that concatenates two strings
 * @s1: String ono
 * @s2: String two
 * Return: Concatinated string
 */

char *str_concat(char *s1, char *s2)
{
	int a = 0, b = 0, x = 0, j = 0;
	char *s;

	if (s1 == NULL)
	{
	s1 = "";
	}
	if (s2 == NULL)
	{
	s2 = "";
	}
	while (s1[a])
	{
	a++;
	}
	while (s2[b])
	{
	b++;
	}
	j = a + b;
	s = malloc((sizeof(char) * j) + 1);
	while (x < j)
	{
	if (x <= a)
	{
	s[x] = s1[x];
	}
	if (x >= a)
	{
	s[x] = s2[b];
	b++;
	}
	x++;
	}
	s[x] = '\0';
	return (s);
}


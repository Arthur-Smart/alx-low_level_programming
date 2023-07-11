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
	char *s;
	int k, c;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	k = c = 0;
	while (s1[k] != '\0')
		k++;
	while (s2[c] != '\0')
		c++;
	s = malloc(sizeof(char) * (k + c + 1));

	if (s == NULL)
		return (NULL);
	k = c = 0;
	while (s1[k] != '\0')
	{
		s[k] = s1[k];
		k++;
	}

	while (s2[c] != '\0')
	{
		s[k] = s2[c];
		k++, c++;
	}
	s[k] = '\0';
	return (s);
}


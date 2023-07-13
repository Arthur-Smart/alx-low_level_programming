#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - A function that concatenates
 * two strings
 * @s1: String one
 * @s2: String two
 * @n: Bytes used in concatenation
 * Return: A pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i = 0,k = 0, ln1 = 0, ln2 = 0;

	while (s1 && s1[ln1])
		ln1++;
	while (s2 && s2[ln2])
		ln2++;
	if (n < ln2)
		str = malloc(sizeof(char) * (ln1 + n + 1));
	else
		str = malloc(sizeof(char) * (ln1 + ln2 + 1));

	if (!str)
		return (NULL);

	while (i < ln1)
	{
		str[i] = s1[i];
		i++;
	}
	while (n < ln2 && i < (ln1 + n))
		str[i++] = s2[k++];
	while (n >= ln2 && i < (ln1 + ln2))
		str[i++] = s2[k++];
	str[i] = '\0';

	return (str);
}

#include "main.h"

int _pal(char *s, int i, int len);
int _str_recursion(char *s);

/**
 * is_palindrome - A function that returns 1 if a
 * string is a palindrome and 0 if not
 * @s: string used
 * Return: 1 or 0
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (_pal(s, 0, _str_recursion(s)));
}

/**
 * _str_recursion - returns the length of a string
 * @s: string length checked
 * Return: length of the string
 */

int _str_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _str_recursion(s + 1));
}

/**
 * _pal - checks the characters for palindrome
 * @s: string to check
 * @i: iterator
 * @len: length of the string
 * Return: 1 if palindrome, 0 if not
 */

int _pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (_pal(s, i + 1, len - 1));
}


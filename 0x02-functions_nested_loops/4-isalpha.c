#include "main.h"

/**
 * _isalpha - finds alphabetic character
 * @c: the alphabet chacter to be checked
 * Return: 1 for the found alphabetic character
 * and 0 for anything else
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
	return (1);
	}
	return (0);
}

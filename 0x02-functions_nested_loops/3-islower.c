#include "main.h"

/**
 * islower - finds lowercase characters
 * Return: 1 incase of lowercase character or 0 for
 * anything else
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
	return (1);
	}
	return (0);
}

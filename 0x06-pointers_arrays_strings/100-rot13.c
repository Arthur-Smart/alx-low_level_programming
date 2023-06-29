#include "main.h"
#include <stdio.h>

/**
 * rot13 - A function that encodes
 * a string using rot13.
 * @str: String Encoded
 * Return: str results
 */

char *rot13(char *str)
{
	int a;
	int k;
	char d1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char drot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (a = 0; str[a] != '\0'; a++)
	{
	for (k = 0; k < 52; k++)
	{
	if (str[a] == d1[k])
	{
	str[a] = drot[k];
	break;
	}
	}
	}
	return (str);
}


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Return: 0 (Success)
 */

int main(void)
{       
        char lc_alphabet, q, e;

        q = 'q';
	e = 'e';

	for (lc_alphabet = 'a'; lc_alphabet <= 'z';
		lc_alphabet++)
	{
	if (lc_alphabet != q && lc_alphabet != e)
	putchar(lc_alphabet);
	}
	putchar('\n');
	return (0);
}

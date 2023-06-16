#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 */

int main(void)
{
	char alphabet_in_lowercase = 'a';

	while (alphabet_in_lowercase <= 'z')
	{
		putchar (alphabet_in_lowercase );
		alphabet_in_lowercase ++;
		putchar ('\n');
	}
	return (0);
}	 

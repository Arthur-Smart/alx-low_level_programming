#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alphabet_in_lowercase;

        for (alphabet_in_lowercase = 'a';
alphabet_in_lowercase <= 'z'; alphabet_in_lowercase++)
	{
	putchar(alphabet_in_lowercase);
	}
	putchar('\n');
        return (0);
}

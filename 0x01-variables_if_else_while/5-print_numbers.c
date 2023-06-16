#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	int start_number;

	for (start_number = '0'; start_number != '9'; start_number++)
        {
	putchar(start_number);
	}
	putchar('\n');
	return (0);
}

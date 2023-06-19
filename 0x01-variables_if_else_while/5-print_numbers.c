#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	int start_num;

	for (start_num = '0'; start_num < '10'; start_num++)
	putchar("%d", start_num);
	putchar('\n');
	return (0);
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	int sd_number;
	for (sd_number = 0; sd_number < 10; sd_number++)
	{
	putchar(sd_number + '0');
	if(sd_number !=9)
	{
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}

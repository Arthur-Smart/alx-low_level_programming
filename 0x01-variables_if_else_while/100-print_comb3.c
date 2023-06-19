#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Return: Always 0 (Sucess)
 */

int main(void)
{
	int f, r;

	for (f = '0'; f < '9'; f++)
	{
	for (r = f + 1; r <= '9'; r++)
	{
	if (r !=f)
	{
	putchar(f);
	putchar(r);
	if (r == '8' && f == '9')
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	}
	putchar('\n');
	return (0);
}	

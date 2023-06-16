#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alp_lower;
	char alp_upper;

	for (alp_lower = 'a'; alp_lower <= 'z'; alp_lower++)
	{
	putchar(alp_lower);
	}

	for (alp_upper = 'A'; alp_upper <= 'Z'; alp_upper++)
	{
	putchar(alp_upper);
	}

	putchar('\n');
	return (0);
}

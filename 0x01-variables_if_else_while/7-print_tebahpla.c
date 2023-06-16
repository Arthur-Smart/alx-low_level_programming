#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	char reverse_way;

	for(reverse_way = 'z'; reverse_way >= 'a'; reverse_way--)
	{
	putchar(reverse_way);
	}
	putchar('\n');
	return (0);
}

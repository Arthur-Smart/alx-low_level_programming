#include <stdlib.h>
#include <time.h>

/* more headers goes there */
#include <stdio.h>


/**
 * main - Entry point
 * Return: 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	if (n > 0)
	
	printf("%dis positive\n", n);

	else if (n == 0)
	
	printf("%d is zero\n", n);
	
	else
	printf("%dis negative\n", n);
	

	printf("\n");
	return (0);
}

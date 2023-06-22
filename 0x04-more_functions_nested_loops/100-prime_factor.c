#include <stdio.h>
#include <math.h>

/**
 * main - Entry point
 * Description:Printing the largest prime
 * factor of the number 612852475143
 * Return: Always 0 (Success)
 */

int main(void)
{
	long n, maxf;

	long number = 612852475143;
	double sq = sqrt(number);

	for (n = 1; n <= sq; n++)
	{
	if (number % n == 0)
	{
	maxf = number / n;
	}
	}
	printf("%ld\n", maxf);
	return (0);
}


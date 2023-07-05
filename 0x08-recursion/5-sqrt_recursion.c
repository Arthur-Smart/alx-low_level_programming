#include "main.h"
#include <stdio.h>

int sqrt_s(int n, int i);

/**
 * _sqrt_recursion - A function that returns
 * the natural square root of a number.
 * @n: Number used
 * Return: Natural sqrt
 */

int _sqrt_recursion(int n)
{
	return (sqrt_s(n ,1));
}

/**
 * sqrt_s - Natural sqrt Evaluation
 * @n: Number used
 * @i: iterator
 * Return: Natural sqrt
 */

int sqrt_s(int n, int i)
{
	int sqr = i * i;

	if (sqr > n)
		return (-1);
	if (sqr == n)
		return (i);
	return (sqrt_s(n, i + 1));
}

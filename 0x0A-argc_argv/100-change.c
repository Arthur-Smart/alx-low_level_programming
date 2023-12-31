#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - A program that prints the minimum number
 * of coins to make change for an amount of money
 * @argc: c set of arguments
 * @argv: v set of argument *
 * Return: 0 (Success), 1 (Error)
 */

int main(int argc, char *argv[])
{
	int n, i, output;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
	printf("Error\n");
	return (1);
	}
	n = atoi(argv[1]);
	output = 0;
	if (n < 0)
	{
	printf("0\n");
	return (0);
	}
	for (i = 0; i< 5 && n >= 0; i++)
	{
	while (n >= coins[i])
	{
	output++;
	n -= coins[i];
	}
	}
	printf("%d\n", output);
	return (0);
}


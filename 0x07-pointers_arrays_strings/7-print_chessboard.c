#include "main.h"

/**
 * print_chessboard - Entry point
 * @a: Array
 * Return: Always 0 (Success)
 */

void print_chessboard(char (*a)[8])
{
	int x, b;

	for (x = 0; x < 8; x++)
	{
	for (b = 0; b < 8; b++)
	_putchar(a[x][b]);
	_putchar('\n');
	}
}

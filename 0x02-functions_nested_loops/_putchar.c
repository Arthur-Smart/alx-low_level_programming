#include <unistd.h>

/**
 * Return: On (Success) 1
 */

int _putchar(char e)
{
	return (write(1, &e, 1));
}

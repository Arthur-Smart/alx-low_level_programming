#include "main.h"
#include <stdio.h>

/**
 * main - A program that prints the
 * number of arguments passed into it.
 * @argc: number of arguments
 * @argv: number of array of arguments
 */

int main(int argc, char *argv[])
{
        (void) argv;
        printf("%d\n", argc - 1);
        return (0);
}

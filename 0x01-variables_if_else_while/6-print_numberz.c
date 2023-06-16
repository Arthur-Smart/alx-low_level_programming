#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
        int sd_number;

        for (sd_number = '0'; sd_number != '9'; sd_number++)
        {
        putchar(sd_number);
        }

        putchar('\n');

        return (0);
}

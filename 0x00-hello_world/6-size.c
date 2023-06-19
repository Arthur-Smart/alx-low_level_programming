#include <stdio.h>

/**
 * main - Entry point
 * A C program that prints the size of various types on the computer it is compiled and run on
 * Return: Always 0 (Success)
 */
int main(void)
{
	 printf("Size of char: %zu bytes\n", sizeof(char));
         printf("Size of int: %zu bytes\n", sizeof(int));
    	 printf("Size of long int: %zu bytes\n", sizeof(long int));
   	 printf("Size of long long: %zu bytes\n", sizeof(long long));
   	 printf("Size of float: %zu bytes\n", sizeof(float));
   	 
	 return (0)
}

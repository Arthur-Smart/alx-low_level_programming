#!/bin/bash
echo '#include <stdio.h> int main(void) { printf("Size of char: %lu byte(s)\nSize of int: %lu byte(s)\nSize of float: %lu byte(s)\nSize of double: %lu byte(s)\nSize of long: %lu byte(s)\nSize of long long: %lu byte(s)\nSize of pointer: %lu byte(s)\n", sizeof(char), sizeof(int), sizeof(float), sizeof(double), sizeof(long), sizeof(long long), sizeof(void *)); return 0; }' > program.c


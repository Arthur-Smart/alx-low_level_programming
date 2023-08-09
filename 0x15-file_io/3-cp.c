#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * create_write_file - A function that checks create and write
 * possibility
 * @file: The file in context
 * Return: The address of the new file or Error description
 */

char create_write_file(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);
	if (!buffer)
	{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
	exit(99);
	}
	return (buffer);
}

/**
 * close_file_descriptor -  A function that closes the file
 * FD_VALUE - The value of the file descriptor
 * Return: void
 */

void close_file_descriptor(int FD_VALUE)
{
	int i;

	i = close(FD_VALUE);
	if (i == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", FD_VALUE);
	exit(100);
	}
}

/**
 * main - Entry point
 * @argc : Argument passed in the function
 * @argv : Array of pointers function to arguments
 * Description: This program execute the copying of content from
 * one file to another file
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int source, dest, i, j;
	char *buffer;

	if (argc != 3)
	{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
	}

	buffer = create_write_file(argv[2]);
	source = open(argv[1], O_RDONLY);
	i = read(source, buffer, 1024);
	dest = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	while (i > 0) {
	if (source == -1 || i == -1)
	{
	dprintf(STDERR_FILENO,
	"Error: Can't read from file %s\n", argv[1]);
	free(buffer);
	exit(98);
	}
	j = write(dest, buffer, i);
	if (dest == -1 || j == -1)
	{
	dprintf(STDERR_FILENO,
	"Error: Can't write to %s\n", argv[2]);
	free(buffer);
	exit(99);
	}
	i = read(source, buffer, 1024);
	dest = open(argv[2], O_WRONLY | O_APPEND);
	}

	free(buffer);
	close_file_descriptor(source);
	close_file_descriptor(dest);

	return (0);
}

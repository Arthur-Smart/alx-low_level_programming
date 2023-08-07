#include "main.h"
#include <stdlib.h>
#include <fcntl.h>

/**
 * read_textfile - A function that reads a text file
 * and prints it to the POSIX standard output
 * @filename: Name of the file read
 * @letters: Number of letter to be read and printed
 * Return: The actual number of letters it could read
 * and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
        char *buffer;
	ssize_t fd;
	ssize_t bytRead;
	ssize_t result;
	
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	bytRead = read(fd, buffer, letters);
	result = write(STDOUT_FILENO, buffer, bytRead);

	free(buffer);
	close(fd);
	return (result);
}

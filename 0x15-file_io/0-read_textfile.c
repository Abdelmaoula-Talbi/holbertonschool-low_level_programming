#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stddef.h>
#include <stdlib.h>


/**
 * read_textfile - reads text file and prints it to the POSIX standard output.
 * @filename: the file the program will read from.
 * @letters: number of letters the program should read and print.
 * Return: the actual number of letters it could read and print,
 * or 0 if the file can not be opened or read, or if filename is NULL,
 * or if write fails or does not write the expected amount of bytes.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int n, r;

	char *s = malloc(letters);
	if (s == NULL)
		return (0);
	if (filename == NULL)
		return (0);
	n = open(filename, O_RDONLY);
	if (n == -1)
		return (0);
	r = read(n, s, letters);
	write(STDOUT_FILENO, s, r);
	free(s);
	close(n);
	return (r);
}

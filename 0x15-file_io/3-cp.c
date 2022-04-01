#include "main.h"
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: number of arguments.
 * @argv: argument vector.
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	int fd_r, ret_r, fd_w, ret_w;
	char *buf_r;

	if (argc != 3)
	{
		exit(97);
		dprintf(2, "Usage: cp file_from file_to\n");
	}
	buf_r = malloc(1024);
	if (buf_r == NULL)
	{
		exit(98);
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
	}
	fd_r = open(argv[1], O_RDONLY);
	if (fd_r == -1)
	{
		exit(98);
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
	}
	ret_r = read(fd_r, buf_r, 1024);
	if (ret_r == -1)
	{
		exit(98);
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
	}
	fd_w = creat(argv[2], 0664);
	if (fd_w == -1)
	{
		exit(99);
		dprintf(2, "Error: Can't write to file %s\n", argv[2]);
	}
	ret_w = write(fd_w, buf_r, ret_r);
	if (ret_w == -1)
	{
		exit(99);
		dprintf(2, "Error: Can't write to file %s\n", argv[2]);
	}
	free(buf_r);
	close(fd_r);
	if (fd_r == -1)
	{
		exit(100);
		dprintf(2, "Error: Can't close fd %d\n", fd_r);
	}
	close(fd_w);
	if (fd_w == -1)
	{
		exit(100);
		dprintf(2, "Error: Can't close fd %d\n", fd_w);
	}
	return (0);
}

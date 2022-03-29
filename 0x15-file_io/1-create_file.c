#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

/**
 * create_file - creates a file.
 * @filename: name of the file to create.
 * @text_content: a NULL terminated string to write to the file.
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int /*fd_r, */fd_w, res_w;
	/*char *text = malloc(strlen(text_content));*/

	if (filename == NULL)
		return (-1);
	/*fd_r = open(text_content, O_RDONLY);*/
	fd_w = creat(filename, 0600);
	/*if (fd_r == -1)
	       return (-1);*/
	if (fd_w == -1)
		return (-1);
	/*read(fd_r, text, strlen(text_content));*/
	if (text_content != NULL)
		res_w = write(fd_w, text_content, strlen(text_content));
	if (res_w == -1)
		return (-1);

	/*free(text);*/
	/*close(fd_r);*/
	close(fd_w);
	return (1);
}

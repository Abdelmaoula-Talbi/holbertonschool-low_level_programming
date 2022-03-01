#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars initialized with a specific char.
 * @size: the size of the array.
 * @c: character of the array.
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;

	ptr = malloc(sizeof(c) * size);
	ptr[0] = 'O';
	if (size == 0)
	{
		return (NULL);
	}
	if (ptr == NULL)
	{
		return (NULL);
	}
	return (0);
}

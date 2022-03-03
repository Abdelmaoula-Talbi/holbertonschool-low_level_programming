#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * and cause normal process termination if it fails.
 * @b: size of memory that will be allocated
 * Return: pointer to the allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	int *p;

	p = malloc(b);
	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}


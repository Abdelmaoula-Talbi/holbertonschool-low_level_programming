#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * array_range -  creates an array of integers.
 * @min: lowest value in the array.
 * @max: highest value in the array.
 * Return: pointer to the allocated memory.
 */
int *array_range(int min, int max)
{
	int *p;
	int i, size;

	if (min > max)
	{
		return (NULL);
	}
	size = (max - min) + 1;
	p = malloc(sizeof(int) * size);
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= size; i ++)
	{
		p[i] = min;
		min++;
	}
	return (p);
}

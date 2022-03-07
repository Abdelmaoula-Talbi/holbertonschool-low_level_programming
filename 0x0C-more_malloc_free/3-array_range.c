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
	int i;

	if (min > max)
	{
		return (NULL);
	}
	p = malloc(sizeof(int) * ((max - min) + 1));
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = min; i <= max; i ++)
	{
		p[i] = min;
		min++;
	}
	return (p);
}

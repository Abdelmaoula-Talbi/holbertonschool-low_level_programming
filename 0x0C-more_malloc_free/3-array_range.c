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
	int *a;
	int i;

	if (min > max)
	{
		return (NULL);
	}
	a = malloc(sizeof(int) * ((max - min) + 1));
	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= max; i ++)
	{
		a[i] = min;
		min++;
	}
	return (a);
}

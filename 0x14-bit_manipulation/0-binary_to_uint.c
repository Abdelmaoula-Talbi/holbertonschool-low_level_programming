#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * _pow - calculate the power of a number.
 * @number: the number to calculate its power.
 * @exponent: the exponent.
 * Return: result of the power operation.
 */
int _pow(int number, int exponent)
{
	int result = 1;

	while (exponent > 0)
	{
		result = result * number;
		exponent--;
	}
	return (result);
}

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointer to a string of 0 and 1 chars.
 * Return: the converted number,
 * 0 if there is one or more chars that is not 0 or 1,
 * or b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int size = strlen(b);
	int i, e = 0;
	unsigned int uint = 0;

	for (i = size - 1; i >= 0; i--)
	{
		if (b == NULL || (b[i] != '0' && b[i] != '1'))
		{
			return (0);
		}
		uint += ((b[i] - 48) * _pow(2, e));
		e++;
	}
	return (uint);
}

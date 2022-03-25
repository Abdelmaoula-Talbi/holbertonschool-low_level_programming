#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointer to a string of 0 and 1 chars.
 * Return: the converted number,
 * 0 if there is one or more chars that is not 0 or 1,
 * or b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	int i, size = strlen(b), base = 1;
	unsigned int uint = 0;

	if (b == NULL)
	{
		return (0);
	}
	for (i = size - 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
			break;
		}
		uint += ((b[i] - 48) * base);
		base = base * 2;
	}
	return (uint);
}


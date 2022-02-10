#include "main.h"

/**
 * add - adds two integers.
 * @a, @b: The integers to add.
 * Return - The result of add.
 */
int add(int a, int b)
{
	int r = a + b;

	if (a < 0 || b < 0)
	{
		r = -r;
	}
	else
	{
		r = r;
	}
	return (r);
}

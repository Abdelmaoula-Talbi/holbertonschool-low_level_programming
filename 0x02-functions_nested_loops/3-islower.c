#include "main.h"
#include <ctype.h>
/**
 * islower - checks for lowercase character.
 *
 * Return: Always 0.
 */
int _islower(int c)
{
	int r;

	if (islower(c))
	{
		r = 1;
	}
		else
		{
			r = 0;
		}
		_putchar(r + '0');
	_putchar('\n');
	return (0);
}

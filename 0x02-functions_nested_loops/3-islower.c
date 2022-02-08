#include "main.h"
#include <ctype.h>
/**
 * islower - checks for lowercase character.
 *
 * Return: Always 0.
 */
int _islower(int c)
{

	if (islower(c))
	{
		return (1);
	}
		else
		{
			return (0);
		}
}

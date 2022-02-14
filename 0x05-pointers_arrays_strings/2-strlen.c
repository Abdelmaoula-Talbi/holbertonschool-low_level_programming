#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: a string to returns its length.
 * Return: Always 0 (Success)
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

#include "main.h"

/**
 * _memset - fills the first n bytes of the memory area
 * pointed to by s with the constant byte b.
 * @s: pointer to the block of memory area to be filled.
 * @b: character to be put in the memory area.
 * @n: number of bytes of memory area that will be filled.
 * Return: s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}


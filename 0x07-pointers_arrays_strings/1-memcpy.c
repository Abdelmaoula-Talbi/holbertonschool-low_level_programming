#include "main.h"

/**
 * _memcpy - copies n bytes from memory area src to memory area dest.
 * @dest: memory area to copy in.
 * @src: memory area to copy from.
 * @n: number of bytes to copy.
 * Return: pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	unsigned int j;

	while (dest[j] != '\0')
	{
		while (src[i] <= src[n])
		{
			dest[j] = src[i];
			i++;
		}
		j++;
	}
	return (dest);
}

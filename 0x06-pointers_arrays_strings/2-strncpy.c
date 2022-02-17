#include "main.h"

/**
 * _strncpy -  copies the string pointed to by src,
 * to the buffer pointed to by dest
 * and at most n bytes of src are copied.
 * @dset: the string to be copied on.
 * @src: the string to be copied.
 * @n: number of bytes of src to be copied.
 * Return: The pointer to the result dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src [i] != '\0' && i < n)
	{
		dest[i] = src [i];
		i++;
	}
		dest[i] = '\0';

	while (src[i] != '\0' && i > n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

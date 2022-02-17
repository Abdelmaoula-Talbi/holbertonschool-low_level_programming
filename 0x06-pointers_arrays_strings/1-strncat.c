#include "main.h"

/**
 * _strncat - concatenates two strings,it will use at most n bytes from src.
 * @dest: string to concatenate with src.
 * @src: string to append to dest.
 * @n: number of bytes to use from src.
 * Return: pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < n && src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	return (dest);
}

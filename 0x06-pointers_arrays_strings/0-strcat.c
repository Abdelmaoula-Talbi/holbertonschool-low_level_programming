#include "main.h"

/**
 * _strcat - function to concatenate two strings.
 * @dest: resulting string after concatenation.
 * @src: source string to append to dest.
 * Return: p the pointer to dest.
 */
char *_strcat(char *dest, char *src)
{
	int i= 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	return dest;
}

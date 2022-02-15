#include "main.h"

/**
 * _strcpy - copies the strin, pointed to by src, to the
 * buffer pointed to by dest.
 * @dest: destination where the string will be copied
 * @src: source from where the string will be copied
 * Return: p the pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	char *p = dest;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (p);
}

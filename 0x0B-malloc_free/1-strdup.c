#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 *  which contains a copy of the string given as a parameter.
 *  @str: string to copy.
 *  Return: pointer to the allocated memory wich contains copy of str.
 */
char *_strdup(char *str)
{
	int size = strlen(str);
	char *ptr;
	char c;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}
	ptr = malloc((sizeof(c) * size) + 1);
	for (i = 0; i <= size; i++)
	{
		ptr[i] = str[i];
	}
	return (ptr);
}

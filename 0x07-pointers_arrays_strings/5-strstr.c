#include "main.h"
#include <stddef.h>
#include <string.h>

/**
 * _strstr - finds the first occurrence of the substring needle
 * in the string haystack.The terminating null bytes (\0) are not compared.
 * @haystack: array of characters to search in.
 * @needle: array of characters to search for.
 * Return:  pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j, k;

	if (!haystack)
		return (NULL);
	if (needle[0] == '\0')
		return (NULL);
	i = 0;
	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[0])
		{
			k = i;
			j = 0;
			while (haystack[i] == needle[j] && needle[j] != '\0')
			{
				if (j == strlen(needle) - 1)
					return (haystack + k);
				else
				{
					i++;
					j++;
				}
			}
		}
		i++;
	}
	return (NULL);
}

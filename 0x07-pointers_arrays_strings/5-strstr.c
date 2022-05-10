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
	unsigned int i, j;

	if (!haystack)
		return (NULL);
	if (!needle)
		return (NULL);
	i = 0;
	while (haystack[i] != '\0')
	{
		j = 0;
		while (needle[j] != '\0')
		{
			if (haystack[i] != needle[j])
				break;
			else if (haystack[i] == needle[j])
				return (haystack + i);
			j++;
		}
		i++;
	}
	return (NULL);
}
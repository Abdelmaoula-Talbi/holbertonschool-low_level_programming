#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat -  concatenates two strings.
 * @s1: first string to concatenate.
 * @s2: second string to concatenate.
 * @n: number of bytes to concatenate from s2 to s1.
 * Return: pointer to the allocated memory for concatenation.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k, size, len1, len2;
	char *p;
	char c;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	i = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
	len1 = i;
	j = 0;
	while (s2[j] != '\0')
	{
		j++;
	}
	len2 = j;
	if (len2 <= n)
	{	
		size = len1 + len2;
	}
	else if (len2 > n)
	{
		size = len1 + n;
	}
	p = malloc((sizeof(c) * size) + 1);
	if (p == NULL)
	{
		return (NULL);
	}
	for (k = 0; k < len1; k++)
	{
		p[k] = s1[k];
	}
	for (k = 0; k < n; k++)
	{
		p[k + len1] = s2[k];
	}
	p[len1 + n + 1] = '\0';
	return (p);
}

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
	unsigned int i, size;
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
	if (n >= strlen(s2))
	{
		size = strlen(s1) + strlen(s2);
	}
	else
	{
		size = strlen(s1) + n;
	}
	p = malloc((sizeof(c) * size) + 1);
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= strlen(s1); i++)
	{
		p[i] = s1[i];
	}
	for (i = 0; i <= n; i++)
	{
		p[i + strlen(s1)] = s2[i];
	}
	p[size + 1] = '\0';
	return (p);
}

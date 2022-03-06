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
	unsigned int k, size;
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
	if (strlen(s2) <= n)
	{	
		size = strlen(s1) + strlen(s2);
		n = strlen(s2);
	}
	else if (strlen(s2) > n)
	{
		size = strlen(s1) + n;
	}
	p = malloc((sizeof(c) * size) + 1);
	if (p == NULL)
	{
		return (NULL);
	}
	for (k = 0; k < strlen(s1); k++)
	{
		p[k] = s1[k];
	}
	for (k = 0; k < n; k++)
	{
		p[k + strlen(s1)] = s2[k];
	}
	p[size] = '\0';
	return (p);
}

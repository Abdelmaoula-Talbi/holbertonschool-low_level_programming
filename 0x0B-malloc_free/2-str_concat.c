#include "main.h"
#include <string.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: first string to concatenate.
 * @s2: seconde string to concatenate.
 * Return: pointer to the memory space which contains s1 followed by s2.
 */
char *str_concat(char *s1, char *s2)
{
	char c;
	char *p;
	unsigned int i;
	unsigned int size = strlen(s1) + strlen(s2);

	p = malloc(sizeof(c) * size);
	if (p == NULL)
	{
		return (NULL);
	}
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; i <= strlen(s1); i++)
	{
		p[i] = s1[i];
	}
	for (i = 0; i <= strlen(s2); i++)
	{
		p[i + strlen(s1)] = s2[i];
	}
	return (p);
}

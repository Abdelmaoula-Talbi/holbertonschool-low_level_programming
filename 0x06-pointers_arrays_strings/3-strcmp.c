#include "main.h"

/**
 *  _strcmp - compares two strings.
 *  @s1: first string to compare.
 *  @s2: second string to compare.
 *  Return: (s1 - s2).
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	if (s1[i] && s2[i] == '\0')
	{
		return (0);
	}
	else
	{
		return (s1[i] - s2[i]);
	}
}

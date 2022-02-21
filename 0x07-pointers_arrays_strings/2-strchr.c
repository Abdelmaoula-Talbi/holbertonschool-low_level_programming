#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates a character in a string.
 * @s: string to look in for the character.
 * @c: the character to locate.
 * Return: pointer to the character or NULL if character not found.
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	if (s[i] == c)
	{
		return (s + i);
	}
	return (0);
}

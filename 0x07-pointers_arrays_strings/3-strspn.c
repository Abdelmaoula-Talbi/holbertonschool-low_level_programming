#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: string to check for second string bytes.
 * @accept: second string to check from for the bytes.
 * Return: number of bytes in the initial segment of s
 * which consist only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j = 0;

	for (i = 0; s[i] != accept[j]; i++)
	{
			if (s[i] == accept[j])
			{
				i = i;
			}
	}
	return (i + 1);
}

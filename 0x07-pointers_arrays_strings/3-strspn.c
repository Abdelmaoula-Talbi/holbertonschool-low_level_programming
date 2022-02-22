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
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				i = i;
			}
			else if (s[i] != accept[j])
			{
				return (i);
			}
		}
	}
	i = i;
	return (i);
}

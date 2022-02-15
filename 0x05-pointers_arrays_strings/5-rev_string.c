#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: string to reverse.
 * Return: Nothing.
 */
void rev_string(char *s)
{
	int i;
	int j;
	int len;
	char c;

	i = 0;
	while ( s[i] != '\0')
	{
		i++;
	}
	len = i;
	i = 0;
	j = len - 1;
	while (j > i)
	{
		c = s[i];
		s[i] = s[j];
		s[j] = c;
		i++; j--;
	}
}

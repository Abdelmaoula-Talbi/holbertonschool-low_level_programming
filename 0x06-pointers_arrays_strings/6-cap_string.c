#include "main.h"

/**
 * cap_string - capitalizes all words of a string.
 * @str: string to capitalize its words.
 * Return: pointer to the string.
 */
char *cap_string(char *str)
{
	int i;
	int j;
	int k;
	char s[] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};

	i = 0;
	j = 1;
	while (str[i] != '\0')
	{
		k = 0;
		while (s[k] != '\0')
		{
			if (str[i] == s[k])
			{
				if ('a' <= str[j] && str[j] <= 'z')
				{
					str[j] = str[j] - 32;
				}
			}
		k++;
		}
	i++;
	j++;
	}
	return (str);
}

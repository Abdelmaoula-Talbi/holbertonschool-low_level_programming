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
	char s[] = {' ', '	', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};

	for (i = 0; str[i] != '\0'; i++)
	{
		if ('a' <= str[0] && str[0] <= 'z')
		{
			str[0] = str[0] - 32;
		}
		for (j = 0; s[j] != '\0'; j++)
		{
			if ('a' <= str[i] && str[i] <= 'z')
			{
				if (str[i - 1] == s[j])
				{
					str[i] = str[i] - 32;
				}
			}
		}
	}
	return (str);
}

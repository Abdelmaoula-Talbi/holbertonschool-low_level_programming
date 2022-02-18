#include "main.h"

/**
 * cap_string - capitalizes all words of a string.
 * @str: string to capitalize its words.
 * Return: pointer to the string.
 */
char *cap_string(char *str)
{
	int i;
	int k;
	char s[] = {' ', '	', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};

	for (i = 0; str[i] != '\0'; i++)
	{
		if ('a' <= str[0] && str[0] <= 'z')
		{
			s[0] = s[0] - 32;
		}
		for (k = 0; s[k] != '\0'; k++)
		{
			if ('a' <= str[i + 1] && str[i + 1] <= 'z')
			{
				if (str[i] == s[k])
				{
					str[i + 1] = str[i + 1] - 32;
				}
			}
		}
	}
	return (str);
}

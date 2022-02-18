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

	i = 0;
	while (str[i] != '\0')
	{
		if ('a' <= str[0] && str[0] <= 'z')
		{
			s[0] = s[0] - 32;
		}
		k = 0;
		while (s[k] != '\0')
		{
			if ('a' <= str[i + 1] && str[i + 1] <= 'z')
			{
				if (str[i] == s[k]) 
				{
					str[i + 1] = str[i + 1] - 32;
				}
			}
		k++;
		}
	i++;
	}
	return (str);
}

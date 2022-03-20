#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * pr_char - print a char.
 * @c: char to print.
 * Return: Nothing.
 */
void pr_char(va_list c)
{
	printf("%c", va_arg(c, int));
}

/**
 * pr_int - print an integer.
 * @i: integer to print.
 * Return: Nothing.
 */
void pr_int(va_list i)
{
	printf("%d", va_arg(i, int));
}

/**
 * pr_float - print a float.
 * @f: float to print.
 * Return: Nothing.
 */
void pr_float(va_list f)
{
	printf("%f", va_arg(f, double));
}

/**
 * pr_string - print an array of characters.
 * @str: string to print.
 * Return: Nothing.
 */
void pr_string(va_list str)
{
	char *s;

	s = va_arg(str, char *);
	if (s == NULL)
	{
		s = ("(nil)");
	}
	printf("%s", s);
}

/**
 * print_all - prints anything of any type passed as
 * variable argument to the variadic function.
 * @format: list of types of arguments passed to the function.
 * Return: Nothing.
 */
void print_all(const char * const format, ...)
{
	pr_t prs[] = {
		{"c", pr_char},
		{"i", pr_int},
		{"f", pr_float},
		{"s", pr_string},
		{NULL, NULL}
	};
	int i, j;
	va_list ap;
	char *sep = "";

	va_start(ap, format);
	i = 0;
	while (format[i] != '\0')
	{
		j = 0;
		while (*(prs[j].func) != NULL)
		{
			if (format[i] == *(prs[j].c))
			{
				printf("%s", sep);
				prs[j].func(ap);
				sep = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}

#include "function_pointers.h"

/**
 * f - print array of characters.
 * @s: array to print.
 * Return: Nothing.
 */
void f(char *s)
{
	int i;

	for (i = 0; i != '\0'; i++)
	{
		_putchar (s[i]);
	}
}
/**
 * print_name - prints a name.
 * @name: the name to print.
 * @f: function pointer to print the name.
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}

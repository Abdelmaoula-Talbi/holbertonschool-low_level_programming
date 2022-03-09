#include "function_pointers.h"

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

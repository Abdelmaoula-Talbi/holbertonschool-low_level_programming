#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>

/**
 * struct print_t - structure to define function to print.
 * @c: the type to print.
 * @func: the function associated to the type.
 */

typedef struct print_t
{
	char *c;
	void (*func)(va_list);
} pr_t;
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif

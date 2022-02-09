#include "main.h"
#include <stdlib.h>
#include <inttypes.h>

/**
 * print_last_digit - prtins the last digit of a number.
 *@n: The number to print its last digit
 * Return: Always 0 (Success)
 */
int print_last_digit(int n)
{
	int l = n % 10;

	if (n < 0)
	{
		l = abs(n) % 10;
	}
	_putchar('0' + l);
	return (l);
}

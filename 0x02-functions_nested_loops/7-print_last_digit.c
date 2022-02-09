#include "main.h"
#include <stdlib.h>
#include <inttypes.h>

/**
 * print_last_digit - prints the last digit of n..
 *@n: The number to print its last digit.
 * Return: The last digit of n.
 */
int print_last_digit(int n)
{
	int l = n % 10;

	if (n < 0)
	{
		l = l * -1;
	}
	_putchar('0' + l);
	return (l);
}

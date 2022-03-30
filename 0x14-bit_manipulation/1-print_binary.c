#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: number to convert to binary.
 * Return: Nothing.
 */
void print_binary(unsigned long int n)
{
	int i, j, index, size= sizeof(unsigned long  int) * 8;
	unsigned long int temp;

	for (i = size - 1; i >= 0; i--)
	{
		temp = n >> i;
		if ((temp & 1) == 0)
		{
			continue;
		}
		else
		{
			index = i;
			break;
		}
	}
	for (j = index; j >= 0; j--)
	{
		temp = n >> j;
		if ((temp & 1) == 0)
		{
			_putchar('0');
		}
		else
		{
			_putchar('1');
		}
	}
}

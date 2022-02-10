#include "main.h"

/**
 * print_triangle - prints a triangle.
 * @size: the size of the triangle.
 * Return: Nothing.
 */
void print_triangle(int size)
{
	int i, j, m;

	if (size <= 0)
		_putchar('\n');

	for (i = 0; i < size; i++)
	{
		for (j = size - 1; j > i; j--)
		{
			_putchar(' ');
		}
		for (m = 0; m < i + 1; m++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}

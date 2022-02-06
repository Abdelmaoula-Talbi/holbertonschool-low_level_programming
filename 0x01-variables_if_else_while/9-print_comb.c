#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c = 0;

	while (c <= 8)
	{
		putchar(c % 10 + '0');
		putchar(',');
		putchar(' ');
		c++;
	}
	putchar('9');
	return (0);
}

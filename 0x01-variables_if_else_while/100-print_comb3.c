#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = 0;

	while (a <= 99)
	{
		if ((a / 10) < (a % 10))
		{
			putchar('0' + a / 10);
			putchar('0' + a % 10);
			putchar(',');
			putchar(' ');
		}
		a++;
	}
	putchar('\n');
	return (0);
}

#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = 0;

	while (a <= 999)
	{
		if ((a % 10) > ((a / 10) % 10))
		{
			if (((a / 10) % 10) > (a / 100))
			{
				putchar('0' + a / 100);
				putchar('0' + (a / 10) % 10);
				putchar('0' + a % 10);
				if (a != 789)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
		a++;
	}
	putchar('\n');
	return (0);
}

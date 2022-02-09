#include "main.h"

/**
 * times_table - prints the 9 times table.
 *
 * Return - Nothing
 */
void times_table(void)
{
	int a;
	int b;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			if (((a * b) >= 10) && (b != 9))
			{
				_putchar('0' + ((a * b) / 10));
				_putchar('0' + ((a * b) % 10));
				_putchar(',');
				_putchar(' ');
			}
			else if (((a * b) < 10) && (b != 9))
			{
				_putchar(' ');
				_putchar('0' + (a * b));
				_putchar(',');
				_putchar(' ');
			}
			else if ((b == 9) && ((a * b) >= 10))
			{
				_putchar('0' + ((a * b) / 10));
				_putchar('0' + ((a * b) % 10));
				_putchar('\n');
			}
			else if ((b == 9) && ((a * b) < 10))
			{
				_putchar(' ');
				_putchar('0' + (a * b));
				_putchar('\n');
			}
			else if (a == 0)
			{
				_putchar('0' + (a * b));
				_putchar(',');
				_putchar(' ');
			}
		}
	}
}


#include <stdio.h>

/**
 * main - a program that prints fizzbuzz from 1 to 100
 *
 * Return: Nothing
 */
int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if ((n % 3 == 0) && (n % 5 == 0))
		{
			printf("FizzBuzz");
			printf(" ");
		}
		else if (n % 3 == 0)
		{
			printf("Fizz");
			printf(" ");
		}
		else if (n % 5 == 0)
		{
			printf("Buzz");
			printf(" ");
		}
		else if (n != 100)
		{
			printf("%d", n);
			printf(" ");
		}
		else
			printf("%d", n);
	}
	putchar('\n');
	return (0);
}

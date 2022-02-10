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
			printf("FizzBuzz ");
		}
		else if (n % 3 == 0)
		{
			printf("Fizz ");
		}
		else if ((n % 5 == 0) && (n != 100))
		{
			printf("Buzz ");
		}
		else if (n == 100)
		{
			printf("Buzz\n");
		}
		else
		{
			printf("%d ", n);
		}
	}
	return (0);
}

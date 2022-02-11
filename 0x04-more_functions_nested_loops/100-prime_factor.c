#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints the largest prime factor of the number 612852475143
 *
 * Return: Nothing
 */
int main(void)
{
	long int n = 612852475143;
	long int i = n;
	long int j = 2;

	while (i != j)
	{
		if (i % j == 0)
		{
			i = i / j;
		}
		else
		{
			j++;
		}
	}

	printf("%li\n", i);

	return (0);
}

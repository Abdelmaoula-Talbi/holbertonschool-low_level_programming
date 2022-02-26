#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to change for an amount of money.
 * @argc: number of arguments passed to the program.
 * @argv: array of arguments passed to the program.
 * Return: 0 (Success).
 */
int main(int argc, char *argv[])
{
	int cents = atoi(argv[1]);
	int coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("0\n");
	}
	if (cents % 25 == 0)
	{
		coins = cents / 25;
	}
	else if ((cents % 25) % 10 == 0)
	{
		coins = (cents / 25) + ((cents % 25) / 10);
	}
	else if ((((cents % 25) % 10)) % 5 == 0)
	{
		coins = (cents / 25) + ((cents % 25) / 10) + ((cents % 25) % 10) / 5;
	}
	else if ((((((cents % 25) % 10)) % 5)) % 2 == 0)
	{
		coins = ((cents / 25) + ((cents % 25) / 10) +
			(((cents % 25) % 10) / 5)) +
			(((cents % 25) % 10) % 5) / 2;
	}
	else
	{
		coins = (((cents / 25) + ((cents % 25) / 10) +
			(((cents % 25) % 10) / 5)) +
			(((cents % 25) % 10) % 5) / 2) + 1;
	}
	printf("%d\n", coins);
	return (0);
}

#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers.
 * @argc: number of arguments.
 * @argv: array of arguments.
 * Return: 0 (Success).
 */
int main(int argc, char *argv[])
{
	int i;
	int res;

	if (argc <= 2)
	{
		printf("Error\n");
		return (0);
	}
	else if (argc > 2)
	{
		for (i = 0; i < argc; i++)
		{
			res = atoi(argv[1]) * atoi(argv[2]);
		}
		printf("%d\n", res);
	}
	return (0);
}

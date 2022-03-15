#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point.
 * @argc: number of arguments..
 * @argv: arguments vector.
 * Return: Always 0 (Success).
 */
int main(int argc, char *argv[])
{
	int result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	result = get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", result);
	return (0);
}

#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers.
 * @argc: number of arguments passed to the program.
 * @argv: array of arguments passed to the program.
 * Return: 0 (Succcess).
 */
int main(int argc, char *argv[])
{
	int i, j;
	int res = 0;

	if (argc <= 2)
	{
		printf("0\n");
	}
	else if (argc > 2)
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if ('0' > argv[i][j] || argv[i][j] > '9')
				{
					printf("Error\n");
					return (1);
				}
			}
			res += atoi(argv[i]);
		}
		printf("%d\n", res);
	}
	return (0);
}

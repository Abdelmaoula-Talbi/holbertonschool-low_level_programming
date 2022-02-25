#include "main.h"
#include <stdio.h>

/**
 * main - function that prints its name.
 * @argc: number of arguments of the program.
 * @argv: array of strings of arguments of the program.
 * Return: 0 (Success).
 */
int main(int argc, char *argv[])
{
	int i;
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[0]);
	}
	return(0);
}

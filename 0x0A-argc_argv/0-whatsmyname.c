#include "main.h"
#include <stdio.h>

/**
 * main - function that prints its name.
 * @argc: number of arguments of the program.
 * @argv: array of strings of arguments of the program.
 * Return: 0 (Success).
 */
int main(__attribute__((unused)) int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}

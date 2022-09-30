#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - print a program that multiplies two numbers
 * @argc: number of arguments pass on command line
 * @argv: array name
 *
 * Return: 1 if the program does not return two arguments,
 * otherwise 0
 */
int main(int argc, char *argv[])
{
	int i, k;

	if (argc == 1 || argc == 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		k = 1;
		for (i = 1; i < 3; i++)
			k *= atoi(argv[i]);

		printf("%d\n", k);
	}
	return (0);
}

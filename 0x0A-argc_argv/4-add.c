#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
 * main - program that adds alls positive numbers
 * @argc: the number of arguments passed on command line
 * @argv: array name
 *
 * Return: 1 if a non-integer , otherwise 0
 */
int main(int argc, char *argv[])
{
	int i, k, lenght, sum;
	char *p;

	if (argc < 2)
		printf("0\n");

	else
	{
		sum = 0;
		for (i = 1; i < argc; i++)
		{
			p = argv[i];
			lenght = strlen(p);

			for (k = 1; k < lenght; k++)
			{
				if (isdigit(*(p + k)) == 0)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}

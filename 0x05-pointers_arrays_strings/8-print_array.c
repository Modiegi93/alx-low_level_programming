#include "main.h"
#include <stdio.h>

/**
 * print_array - Write a function that prints n elements of
 * an array of integers, followed by a new line.
 * @n: the number of array elements
 * @a: an array of integers
 * Return: void
 */
void print_array(int *a, int n)
{
	if (a)
	{
		while (n > 0)
		{
			printf("%d", *a++);
			if (--n)
				printf(", ");
		}
		_putchar('\n');
	}
}

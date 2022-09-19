#include "main.h"
#include <stdio.h>

/**
 * print_array - Write a function that prints n elements of
 * an array of integers, followed by a new line.
 * @n: the number of array elements
 * @a: an array of integers
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}

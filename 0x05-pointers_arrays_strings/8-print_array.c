#include "main.h"
#include <stdio.h>

/**
 * print_array - Write a function that prints n elements of
 * an array of integers, followed by a new line.
 * @n: integer
 * @a: an array
 * Return: array of integers
 */
void print_array(int *a, int n)
{
	int array[5];

	array[0] = 98;
	array[1] = 402;
	array[2] = -198;
	array[3] = 298;
	array[4] = -1024;
	print_array(array, 5);
	printf(", \n");
}

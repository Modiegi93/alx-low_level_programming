#include "main.h"

/**
 * array_range - create an array of integers
 * @min: minimum value of integers
 * @max: maximum value of integers
 *
 * Return: pointer to the newly created array
 * if min > max and malloc fails, NULL
 */
int *array_range(int min, int max)
{
	int *array, i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	array = malloc(sizeof(int) * size);

	if (!array)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = min++;

	return (array);
}


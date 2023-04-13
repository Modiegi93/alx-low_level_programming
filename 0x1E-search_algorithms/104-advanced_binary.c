#include "search_algos.h"

/**
 * _advanced_binary - performs advanced binary search
 * @array: integer array
 * @size: size of array
 * @value: value to search for
 *
 * Return: the index found or -1 if not found
 */
int *_advanced_binary(int *array, size_t size, int value)
{
	size_t i = 0;

	if (!size || !array)
		return (NULL);
	for (printf("Searching in array: "); i < size; i++)
		printf("%d%s", array[i], i + 1 == size ? "\n" : ", ");

	i = (size - 1) / 2;
	if (array[i] == value)
	{
		if (i)
			return (_advanced_binary(array, i + 1, value));
		return (array + i);
	}
	else if (array[i] > value)
		return (_advanced_binary(array, i + 1, value));
	else
		return (_advanced_binary(array + i + 1, size - i - 1, value));
}

/**
 * advanced_binary - searches for a value in a sorted array of integers.
 * @array: pointer to the first element of the array
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: the index where value is located or -1 if not found
 */
int advanced_binary(int *array, size_t size, int value)
{
	int *a = _advanced_binary(array, size, value);

	if (!a)
		return (-1);
	else
		return (a - array);
}

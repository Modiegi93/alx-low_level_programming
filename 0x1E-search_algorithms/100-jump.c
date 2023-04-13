#include "search_algos.h"

/**
 * jump_search - searches for a value in a sorted array of integers
 * using the Jump search algorithm
 * @array: pointer to the first element of the array
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Description: array will be sorted in ascending order. You have to
 * use the square root of the size of the array as the jump step.
 * Every time you compare a value in the array to the value you are
 * searching for, you have to print this value
 *
 * Return: first index where value is located. Otherwise -1 if value
 * value is not present in array or array is NULL
 */
int jump_search(int *array, size_t size, int value)
{
	size_t jump = sqrt(size), i = 0;

	if (array == NULL)
		return (-1);

	while (i < size && array[i] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		i += jump;
	}

	jump = i - jump;
	printf("Value found between indexes [%lu] and [%lu]\n", jump, i);
	i = i >= size ? size - 1 : i;
	while (jump <= i)
	{
		printf("Value checked array[%lu] = [%d]\n", jump, array[jump]);
		if (array[jump] == value)
			return (jump);
		jump++;
	}
	return (-1);
}

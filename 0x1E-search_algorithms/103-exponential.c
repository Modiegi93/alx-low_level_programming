#include "search_algos.h"

/**
 * exponential_search - searches for a value in a sorted array of integers
 * using the Exponential search algorithm
 * @array: pointer to the first element of the array
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Description: array will be sorted in ascending order.use powers of 2 as
 * exponential ranges to search in your array. Every time you compare a value
 * in the array to the value you are searching for, you have to print this
 * value. Once you’ve found the good range, you need to use a binary search:
 * Every time you split the array, you have to print the new array
 * (or subarray) you’re searching in
 *
 * Return: the index or -1 if not found.
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 1, new_size = 0;
	int ret;

	if (!array || !size)
		return (-1);

	while (i < size && array[i] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		i <<= 1;
	}
	new_size = (i >= size ? size : i + 1) - (i >> 1);
	i >>= 1;
	printf("Value found between indexes [%lu] and [%lu]\n",
			i, i << 1 >= size ? size - 1 : i << 1);
	ret = binary_search(array + i, new_size, value);
	return (ret == -1 ? ret : ret + (int)i);
}

/**
 * binary_search - searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: pointer to the first element of the array
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Description: array will be sorted in ascending order
 * value won’t appear more than once in array. You must print
 * the array being searched every time it changes.
 *
 * Return: the index where value is located, otherwise -1 if value is
 * not present or array is NULL
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i, left, right;

	if (array == NULL)
		return (-1);

	for (left = 0, right = size - 1; right >= left;)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = left + (right - left) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			right = i - 1;
		else
			left = i + 1;
	}
	return (-1);
}

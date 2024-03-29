#include "search_algos.h"

/**
 * interpolation_search - searches for a value in a sorted array of integers
 * using the Interpolation search algorithm
 * @array: pointer to the first element of the array
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Description: array will be sorted in ascending order.
 * To determine the probe position, you can use :
 * size_t pos = low + (((double)(high - low) / (array[high] - array[low]))
 * * (value - array[low])). Every time you compare a value in the array to
 * the value you are searching, you have to print this value
 *
 * Return: the first index where value is located. Otherwise -1 if not found
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1, pos = 0;

	if (!array || !size)
		return (-1);

	while (1)
	{
		pos = low + (((double)(high - low) / (array[high] - array[low]))
				* (value - array[low]));
		if (pos >= size)
		{
			printf("Value checked array[%lu] is out of range\n", pos);
			break;
		}
		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
			return (pos);

		else if (array[pos] > value)
			high = pos - 1;
		else
			low = pos + 1;
	}
	return (-1);
}

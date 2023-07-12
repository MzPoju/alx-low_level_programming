#include "search_algos.h"

/**
 * linear_search_algorithm - function that searches for a value in an array of integers
 * @array: pointer to first element
 * @size: number of elements in array
 * @value: value to search for
 * Return: first index else -1
 */
int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%u] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}
	return (-1);
}
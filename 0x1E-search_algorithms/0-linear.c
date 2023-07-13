#include "search_algos.h"

/**
 * linear_search - Algorith for linear search
 * @array: pointer to array's first element
 * @size: number of the element in the array
 * @value: search value
 * Return: index of searched value, else return -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}

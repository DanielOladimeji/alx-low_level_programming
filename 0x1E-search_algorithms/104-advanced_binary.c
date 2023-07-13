#include "search_algos.h"

/**
 * print_array - prints the array
 * @array: pointer to first elementt of the array
 * @size: number of elements in array
 */
void print_array(int *array, size_t size)
{
	size_t i;

	printf("Search in array: ");
	printf("%d", array[0]);
	for (i = 1; i < size; i++)
		printf(", %d", array[i]);
	printf("\n");
}

/**
 * binary_search_recursive - binary search function recursive pattern
 * @array: pointer to first element of the array
 * @left: start point of the array
 * @right: end of the array
 * @value: search value
 * Return: return the index, else return -1
 */
int binary_search_recursive(int *array, int left, int right, int value)
{
	int middle;

	if (right >= left)
	{
		print_array(array + left, right - left + 1);
		middle = (right + left) / 2;
		if (array[middle] == value && array[middle - 1] != value)
			return (middle);
		else if (array[middle] < value)
			return (binary_search_recursive(array, middle + 1, right, value));
		else
			return (binary_search_recursive(array, left, middle, value));
	}

	return (-1);
}

/**
 * advanced_binary - advanced binary search algorithm
 * @array: pointer to first elementt of the array
 * @size: number of elements in array
 * @value: search value
 * Return: index of the searched element, else return -1
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);

	return (binary_search_recursive(array, 0, size - 1, value));
}

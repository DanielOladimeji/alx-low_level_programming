#include "search_algos.h"

/**
 * array_print - prints an array
 * @array: pointer to array elements
 * @lo: low bound index
 * @hi: high bound index
 */
void array_print(int *array, size_t lo, size_t hi)
{
	size_t i;

	printf("Search in array: ");
	for (i = lo; i <= hi; i++)
	{
		printf("%d", array[i]);
		if (i < hi)
			printf(", ");
	}
	printf("\n");
}

/**
 * exponential_search - exponential search algorithm
 * @array: pointer to the array element
 * @size: size of the array
 * @value: search value
 * Return: the index of the found value, else -1 if
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t start, end, x;

	if (!array || size == 0)
		return (-1);

	end = 1;
	start = 1;
	while (end < size)
	{
		if (value < array[end])
			break;
		printf("Value checked array[%lu] = [%d]\n", end, array[end]);
		start = end;
		end = end * 2;
	}
	x = end < size - 1 ? end : size - 1;
	printf("Value found between indexes [%lu] and [%lu]\n", start, x);
	return (help_binary(array, value, end / 2, x));
}

/**
 * help_binary - binary search using recursive pattern
 * @array: points to elements of the array
 * @value: search value
 * @lo: low bound index
 * @hi: high bound index
 * Return: the index of the found value, else or -1
 */
int help_binary(int *array, int value, size_t lo, size_t hi)
{
	size_t mid;

	array_print(array, lo, hi);
	if (hi == lo && array[lo] != value)
		return (-1);

	mid = ((hi - lo) / 2) + lo;
	if (array[mid] == value)
		return (mid);
	if (array[mid] > value)
		return (help_binary(array, value, lo, mid - 1));
	if (array[mid] < value)
		return (help_binary(array, value, mid + 1, hi));
	return (-1);
}

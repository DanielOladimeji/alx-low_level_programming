#include "search_algos.h"
#include <math.h>

/**
 * jump_list - jump list searche algorithm
 * @list: input list
 * @size: size of the array
 * @value: search value
 * Return: index of the number
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t index, a, b;
	listint_t *prev;

	if (list == NULL || size == 0)
		return (NULL);

	b = (size_t)sqrt((double)size);
	index = 0;
	a = 0;

	do {
		prev = list;
		a++;
		index = a * b;

		while (list->next && list->index < index)
			list = list->next;

		if (list->next == NULL && index != list->index)
			index = list->index;

		printf("Value checked at index [%d] = [%d]\n", (int)index, list->n);

	} while (index < size && list->next && list->n < value);

	printf("Value found between indexes ");
	printf("[%d] and [%d]\n", (int)prev->index, (int)list->index);

	for (; prev && prev->index <= list->index; prev = prev->next)
	{
		printf("Value checked at index [%d] = [%d]\n", (int)prev->index, prev->n);
		if (prev->n == value)
			return (prev);
	}

	return (NULL);
}

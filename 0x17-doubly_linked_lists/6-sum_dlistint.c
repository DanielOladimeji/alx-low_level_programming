#include <stdlib.h>
#include "lists.h"

/**
 * sum_dlistint - sum up all the data
 * @head: head pointer
 * Return: return the sum
 */
int sum_dlistint(dlistint_t *head)
{
	size_t sum = 0;

	if (head == NULL)
		return (sum);
	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}

	return (sum);
}

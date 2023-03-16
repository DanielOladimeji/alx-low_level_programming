#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - free a doubled linked list
 * @head: pointer to head pointer
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = NULL;

	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}

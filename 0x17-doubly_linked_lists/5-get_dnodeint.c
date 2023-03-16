#include <stdlib.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - return nth nod of a double linked list
 * @head: head pointer
 * @index: node index to be found
 * Return: nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t count = 0;

	if (head == NULL)
		return (NULL);
	while (head != NULL)
	{
		if (count == index)
			return (head);
		count++;
		head = head->next;
	}
	return (NULL);
}

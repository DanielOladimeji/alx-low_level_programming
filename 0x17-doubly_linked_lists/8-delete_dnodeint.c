#include <stdlib.h>
#include "lists.h"

/**
  * listint_len - return the number of elements in linked list
  * @h: pointer to the linked list
  * Return: number of elements
  */
size_t listint_len(const dlistint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}

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

/**
  * delete_dnodeint_at_index - delete the node at index
  * @head: pointer to head pointer
  * @index: index
  * Return: 1 if succeeded, -1 if failed
  */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = NULL;
	dlistint_t *nthnode = NULL;
	size_t length = 0;

	length = listint_len(*head);
	if (head == NULL || *head == NULL || index > length - 1)
		return (-1);
	if (index == 0)
	{
		if ((*head)->next == NULL)
		{
			*head = NULL;
			return (1);
		}
		tmp = (*head)->next;
		tmp->prev = NULL;
		tmp->next = (*head)->next->next;
		free(*head);
		*head = tmp;
		return (1);
	}
	nthnode = get_dnodeint_at_index(*head, index);
	nthnode->prev->next = nthnode->next;
	if (nthnode->next != NULL)
		nthnode->next->prev = nthnode->prev;
	free(nthnode);

	return (1);
}

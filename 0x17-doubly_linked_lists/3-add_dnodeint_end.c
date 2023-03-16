#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - add new node at the end
 * @head: pointer to head pointer
 * @n: number to be added
 * Return: address of new element, NULL if failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode = NULL;
	dlistint_t *tmp = NULL;

	if (head == NULL)
		return (NULL);
	newnode = malloc(sizeof(*newnode));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;
	if (*head == NULL)
	{
		newnode->prev = NULL;
		*head = newnode;
		return (newnode);
	}
	tmp = *head;
	while (tmp->next != NULL)
		tmp = tmp->next;
	newnode->prev = tmp;
	tmp->next = newnode;

	return (newnode);
}

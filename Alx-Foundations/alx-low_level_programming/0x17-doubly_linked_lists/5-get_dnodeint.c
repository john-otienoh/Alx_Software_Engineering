#include <stdio.h>
#include "lists.h"
/**
 * get_dnodeint_at_index - function that returns the nth node of a
 * dlistint_t linked list
 * @head: Head of the linked list
 * @index: Index of node to find
 * Return: nth node of a dlistint_t linked list
 * or NULL if the node does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t n;

	n = 0;
	while (n < index && head->next)
	{
		head = head->next;
		n += 1;
	}
	if (n < index)
		return (NULL);
	return (head);
}

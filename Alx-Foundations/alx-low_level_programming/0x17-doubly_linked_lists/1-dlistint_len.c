#include <stdio.h>
#include "lists.h"
/**
 * dlistint_len - function that returns the number of elements
 * in a linked dlistint_t list.
 * @h: Doubly linked list
 * Return: number of elements in dlistint_t list
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	size_t len;

	len = 0;
	while (temp != NULL)
	{
		len += 1;
		temp = temp->next;
	}
	return (len);
}

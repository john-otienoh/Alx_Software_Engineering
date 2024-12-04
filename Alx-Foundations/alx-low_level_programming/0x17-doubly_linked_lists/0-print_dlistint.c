#include <stdio.h>
#include "lists.h"
/**
 * print_dlistint - function that prints all the elements of a dlistint_t list
 * @h: Doubly linked list.
 * Return: Number of elements in the list.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t elem;
	const dlistint_t *temp = h;

	elem = 0;
	while  (temp != NULL)
	{
		printf("%d\n", temp->n);
		elem += 1;
		temp = temp->next;
	}
	return (elem);
}

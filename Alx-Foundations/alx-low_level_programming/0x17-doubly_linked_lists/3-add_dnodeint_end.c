#include <stdio.h>
#include "lists.h"
/**
 * add_dnodeint_end - function that adds a new node
 * at the end of a dlistint_t list.
 * @head: Head of the linked list
 * @n: - Integer to store in the list
 * Return: The address of the new element,
 * or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp;
	dlistint_t *tail = *head;

	temp = malloc(sizeof(dlistint_t));
	if (temp != NULL)
	{
		temp->n = n;
		temp->next = NULL;
	}
	else
		return (NULL);
	if (tail != NULL)
	{
		while (tail->next != NULL)
			tail = tail->next;
		tail->next = temp;
	}
	else
		*head = temp;
	return (temp);
}

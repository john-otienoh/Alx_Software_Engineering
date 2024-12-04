#include <stdio.h>
#include "lists.h"
/**
 * add_dnodeint - function that adds a new node
 * at the beginning of a dlistint_t list.
 * @head: First node of the linked list.
 * @n: integer of the doubly linked list to be added.
 * Return: the address of the new element
 * or NULL if it failed.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp;

	temp = malloc(sizeof(dlistint_t));
	if (temp != NULL)
	{
		temp->n = n;
		temp->next = *head;
	}
	else
		return (NULL);
	if (*head != NULL)
		temp->next = *head;
	*head = temp;
	return (temp);
}

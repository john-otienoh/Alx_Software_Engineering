#include <string.h>
#include "lists.h"
/**
 * add_node - adds a new node at the beginning
 * of a list_t list.
 * @head: head(first node) of the linked list.
 * @str: string to store in the list.
 * Return: address of the head(first node).
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *node_add;
	size_t n;

	node_add = malloc(sizeof(list_t));
	if (node_add == NULL)
	{
		return (NULL);
	}
	node_add->str = strdup(str);

	for (n = 0; str[n]; n++)
		;

	node_add->len = n;
	node_add->next = *head;
	*head = node_add;

	return (*head);
}

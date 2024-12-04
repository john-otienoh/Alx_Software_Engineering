#include "lists.h"

/**
 * insert_node - Inserts a number into a sorted singly-linked list.
 * @head: A pointer the head of the linked list.
 * @num: The number to insert.
 * Return: If the function fails - NULL.
 * Otherwise - a pointer to the new node.
 */
listint_t *insert_node(listint_t **head, int num)
{
	listint_t *node = *head, *newl;

	newl = malloc(sizeof(listint_t));
	if (newl == NULL)
		return (NULL);
	newl->n = num;
	if (node == NULL || node->n >= num)
	{
		newl->next = node;
		*head = newl;
		return (newl);
	}
	while (node && node->next && node->next->n < num)
		node = node->next;
	newl->next = node->next;
	node->next = newl;
	return (newl);
}

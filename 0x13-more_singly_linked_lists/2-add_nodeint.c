#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a linked list.
 * @head: A double pointer to the head of the linked list.
 * @n: The integer to be stored in the new node.
 *
 * Return: A pointer to the new node, or NULL if memory allocation fails.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->next = *head;
	new->n = n;

	*head = new;
	return (new);
}

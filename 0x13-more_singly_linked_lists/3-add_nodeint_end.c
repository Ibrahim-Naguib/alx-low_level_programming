#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a linked list.
 * @head: A double pointer to the head of the linked list.
 * @n: The integer to be stored in the new node.
 *
 * Return: A pointer to the new node, or NULL if memory allocation fails.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *temp = *head;

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new;
	return (new);
}

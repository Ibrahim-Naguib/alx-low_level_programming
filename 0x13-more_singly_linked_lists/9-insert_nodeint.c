#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a specific index.
 * @head: A double pointer to the head of the linked list.
 * @idx: The index at which the new node should be inserted.
 * @n: The integer to be stored in the new node.
 *
 * Return: A pointer to the new node, or NULL.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *temp = *head;
	unsigned int i = 0;

	if (new == NULL)
		return (NULL);
	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	while (i < idx - 1 && temp != NULL)
	{
		temp = temp->next;
		i++;
	}

	if (temp == NULL)
	{
		free(new);
		return (NULL);
	}

	new->next = temp->next;
	temp->next = new;

	return (new);
}

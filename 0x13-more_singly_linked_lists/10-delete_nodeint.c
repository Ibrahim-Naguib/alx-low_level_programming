#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a specific index.
 * @head: A double pointer to the head of the linked list.
 * @idx: The index at which the new node should be inserted.
 * @n: The integer to be stored in the new node.
 *
 * Return: A pointer to the new node, or NULL.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = *head;
	listint_t *prev = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);


	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}

	while (current != NULL)
	{
		if (i == index)
		{
			prev->next = current->next;
			free(current);
			return (1);
		}
		prev = current;
		current = current->next;
			i++;
	}
	return (-1);
}

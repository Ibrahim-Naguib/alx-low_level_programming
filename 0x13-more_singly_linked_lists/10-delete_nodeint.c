#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes a node at a specific index.
 * @head: A double pointer to the head of the linked list.
 * @index: The index of the node to be deleted.
 *
 * Return: 1 if the deletion is successful, -1 if not.
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

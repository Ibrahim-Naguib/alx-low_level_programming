#include "lists.h"

/**
 * reverse_listint - Reverses a linked list in place.
 * @head: A double pointer to the head of the linked list.
 *
 * Return: A pointer to the new head of the reversed list.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp;
	listint_t *next;

	if (head == NULL || *head == NULL)
		return (NULL);

	temp = *head;
	*head = NULL;

	while (temp)
	{
		next = temp->next;
		temp->next = *head;
		*head = temp;
		temp = next;
	}
	return (*head);
}

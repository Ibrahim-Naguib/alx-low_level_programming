#include "lists.h"

/**
 * pop_listint - removes the first element and returns its value.
 * @head: A pointer to a pointer to the head of the list.
 * Return: The value of the removed element.
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int pop;

	if (head == NULL || *head == NULL)
		return (0);

	temp = (*head)->next;
	pop = (*head)->n;

	free(*head);
	*head = temp;
	return (pop);
}

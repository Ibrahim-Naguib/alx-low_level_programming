#include "lists.h"

/**
 * pop_listint - removes the first element and returns its value.
 * @head: A pointer to a pointer to the head of the list.
 * Return: The value of the removed element.
 */

int pop_listint(listint_t **head)
{
	listint_t *temp = (*head)->next;
	int pop = (*head)->n;

	if (head == NULL || *head == NULL)
		return (0);

	free(*head);
	*head = temp;
	return (pop);
}

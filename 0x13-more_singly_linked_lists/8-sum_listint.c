#include "lists.h"

/**
 * sum_listint - Calculates the sum of all integer values in a linked list.
 * @head: A pointer to the head of the linked list.
 *
 * Return: The sum of all integers in the linked list.
 */

int sum_listint(listint_t *head)
{
	listint_t *temp = head;
	int sum = 0;

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}

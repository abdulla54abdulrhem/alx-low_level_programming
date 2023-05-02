#include "lists.h"
/**
 * sum_listint - Computes the sum of all the integers
 * @head: A pointer to the head node of the listint_t list.
 * Return: The sum
 */
int sum_listint(listint_t *head)
{
	int sum;
	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}

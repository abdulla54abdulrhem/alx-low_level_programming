#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: pointer to the head of the linked list.
 * @index: index of the node to be returned.
 * Return: pointer 
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	i = 0;
	while (i < index && head != NULL)
	{
		i++;
		head = head->next;
	}
	if (i != index)
		return (NULL);
	return (head);
}

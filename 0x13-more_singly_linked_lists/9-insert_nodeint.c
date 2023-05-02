#include "lists.h"
/**
* insert_nodeint_at_index - inserts at idx
* @head: pointer
* @ids: index
* @n: value
* Return: node
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *tmp, *node;
	i = 0;
	if (head == NULL)
		return (NULL);
	tmp = *head;
	while (tmp != NULL && i != idx - 1)
	{
		tmp = tmp->next;
		i++;
	}
	if (i != idx - 1 && idx != 0)
		return (NULL);
	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	if (idx != 0)
	{
		node->next = tmp->next;
		tmp->next = node;
	}
	else
	{
		node->next = *head;
		*head = node;
	}
	return (node);
}

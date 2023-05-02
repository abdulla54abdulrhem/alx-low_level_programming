#include "lists.h"
/**
 * add_nodeint - Adds a new node at the beginning of a listint_t list.
 * @head: A pointer to a pointer to the head of the listint_t list.
 * @n: The integer value to be stored in the new node.
 * Return: A pointer
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
  listint_t *node;
  node = malloc(sizeof(listint_t));
  if (node == NULL)
    return (NULL);
  node->next = *head;
  node->n = n;
  *head = node;
  return (*head);
}

#include "lists.h"
/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list.
 *
 * @head: A pointer to a pointer to the head of the listint_t list.
 * @n: The integer value to be stored in the new node.
 *
 * Return: A pointer to the newly added node.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
  listint_t *node, *tmp;
  node = malloc(sizeof(listint_t));
  if (node == NULL)
    return (NULL);
  node->next = NULL;
  node->n = n;
  if (*head != NULL) {
    tmp = *head;
    while (tmp->next != NULL) {
      tmp = tmp->next;
    }
    tmp->next = node;
  } else {
    *head = node;
  }
  return (node);
}

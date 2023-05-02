#include "lists.h"
/**
 * pop_listint - Deletes the head node of a listint_t linked list and
 * @head: A pointer to a pointer to the h
 * Return: The integer value stored in t
 */
int pop_listint(listint_t **head)
{
  int n;
  listint_t *t;
  if (*head == NULL)
    return (0);
  n = (*head)->n;
  t = *head;
  *head = (*head)->next;
  free(t);
  return (n);
}

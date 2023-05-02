#include "lists.h"
/**
 * free_listint2 - Frees a listint_t list and sets the head to NULL.
 * @head: A pointer to a pointer
 * Return: None.
 */
void free_listint2(listint_t **head)
{
  listint_t *tmp;
  if (head == NULL)
    return;
  while (*head != NULL) {
    tmp = *head;
    *head = (*head)->next;
    free(tmp);
  }
  *head = NULL;
}

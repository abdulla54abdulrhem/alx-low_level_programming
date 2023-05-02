#include "lists.h"
/**
 * print_listint - Prints all the elements of a listint_t list.
 *
 * @h: A pointer to the head of the listint_t list.
 *
 * Return: int.
 */
size_t print_listint(const listint_t *h)
{
  int counter;
  counter = 0;
  while (h != NULL) {
    printf("%d\n", h->n);
    h = h->next;
    counter++;
  }
  return (counter);
}

#include "lists.h"
/**
 * listint_len - Returns the number of elements in a listint_t list.
 * @h: A pointer to the head of the listint_t list.
 * Return: The number
 */
size_t listint_len(const listint_t *h)
{
  int counter;
  counter = 0;
  while (h != NULL) {
    counter++;
    h = h->next;
  }
  return (counter);
}

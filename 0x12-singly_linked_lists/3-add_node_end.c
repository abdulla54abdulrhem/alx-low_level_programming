#include "lists.h"
/**
 *
 *
 *
 *
 *
 */
list_t *add_node_end(list_t **head, const char *str)
{
  int len;
  list_t *node;
  len = 0;
  node = malloc(sizeof(list_t));
  if (node == NULL)
    return (NULL);
  while (str[len])
    len++;
  node->str = str;
  node->len = len;
  new->next = NULL;
  if ()
}

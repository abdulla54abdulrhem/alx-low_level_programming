#include "lists.h"
#include <string.h>
/**
 * add_node_end - Add a new node at the end of a linked list.
 *
 * @head: Pointer to a pointer to the head of the linked list.
 * @str: Pointer to a string to be added to the new node.
 *
 * Return: Pointer to the new node.
 */
list_t *add_node_end(list_t **head, const char *str)
{
    int len;
    list_t *node, *tmp;
    len = 0;
    node = malloc(sizeof(list_t));
    if (node == NULL)
        return (NULL);
    while (str[len])
      len++;
    node->str = strdup(str);
    node->len = len;
    node->next = NULL;
    if (strdup(str) == NULL)
    {
        return (NULL);
    }
    if (*head == NULL)
    {
        *head = node;
        return (node);
    }
    tmp = *head;
    while (tmp->next != NULL)
        tmp = tmp->next;
    tmp->next = node;
    return (node);
}

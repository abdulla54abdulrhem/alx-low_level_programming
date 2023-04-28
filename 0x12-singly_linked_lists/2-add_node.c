#include "lists.h"
#include <string.h>
/**
 * add_node - Add a new node at the beginning of a linked list.
 *
 * @head: Pointer to a pointer to the head of the linked list.
 * @str: Pointer to a string to be added to the new node.
 *
 * Return: Pointer to the new node.
 */
list_t *add_node(list_t **head, const char *str)
{
    list_t *node;
    int length = 0;
    while (str[length])
        length++;
    node = malloc(sizeof(list_t));
    if (node == NULL)
        return (NULL);
    node->str = strdup(str);
    node->len = length;
    node->next = *head;
    *head = node;
    return (node);
}

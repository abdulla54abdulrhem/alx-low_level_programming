#include "lists.h"
/**
 * free_list - Frees a linked list and all its nodes.
 *
 * @head: Pointer to the head of the linked list.
 *
 * Return: void.
 */
void free_list(list_t *head)
{
    list_t *tmp;

    while (head != NULL)
    {
        tmp = head->next;
        free(head->str);
        free(head);
        head = tmp;
    }
}

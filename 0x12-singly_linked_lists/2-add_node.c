#include "lists.h"
#include <string.h>
/**
* add_node - add node at begining
* @head: the pointer to pointer of head
* @str: pointer to string
* Return: the node
*/
list_t *add_node(list_t **head, const char *str)
{
list_t *node;
int length;
length = 0;
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

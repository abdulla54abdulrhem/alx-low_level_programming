#include "lists.h"
/**
*  print_list - print linked list
* @h: linked list pointer
* Return: counter
*/
size_t print_list(const list_t *h)
{
int i;
i = 0;
while (h != NULL)
{
if (h->str == NULL)
printf("[0] (nil)\n");
else
printf("[%d] %s\n",h->len,h->str);
h = h->next;
i++;
}
return (i);
}

#include "lists.h"
/**
 * delete_nodeint_at_index - delete node at indx
 * @head: linked
 * @index: index
 * Return: 1 or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
  listint_t *t, *del;
  unsigned int i;
  t = *head;
  i = 0;
  if (*head == NULL)
    return (-1);
  if (index == 0)
    {
      t = t->next;
      free(*head);
      *head = t;
      return (1);
    }
  else
    {
      while (t != NULL && i != index - 1)
	{
	  i++;
	  t = t->next;
	}
      if (i != index - 1)
	return (-1);
      del = t->next;
      t->next = t->next->next;
      free(del);
      return (1);
    }
}~#include "lists.h"
/**
 * delete_nodeint_at_index - delete node at indx
 * @head: linked
 * @index: index
 * Return: 1 or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *t, *del;
	unsigned int i;
	t = *head;
	i = 0;
	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		t = t->next;
		free(*head);
		*head = t;
		return (1);
	}
	else
	{
		while (t != NULL && i != index - 1)
		{
			i++;
			t = t->next;
		}
		if (i != index - 1)
			return (-1);
		del = t->next;
		t->next = t->next->next;
		free(del);
		return (1);
	}
}

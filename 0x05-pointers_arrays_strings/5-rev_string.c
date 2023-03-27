#include "main.h"
#include "2-strlen.c"
#include <stdlib.h>
/**
 * rev_string - reverse a string
 * @s : a pointer to string
 *
 */
void rev_string(char *s)
{
char *tmp = s;
int len = _strlen(s);
char *ss = (char *) malloc(len * sizeof(char));
int i;
for (i = 0; i < len; i++)
{
ss[i] = (*tmp);
tmp++;
}
for (i = len - 1; i >= 0; i--)
{
(*s) = ss[i];
s++;
}
}

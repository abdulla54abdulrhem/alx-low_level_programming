#include "main.h"
#include "2-strlen.c"
#include <stdlib.h>
/**
 * print_rev - reverse a string
 * @s : a pointer to string
 *
 */
void print_rev(char *s)
{
int len = _strlen(s);
char *ss = (char *) malloc(len * sizeof(char));
int i;
for (i = 0; i < len; i++)
{
ss[i] = (*s);
s++;
}
for (i = len - 1; i >= 0; i--)
{
_putchar(ss[i]);
}
_putchar('\n');
}

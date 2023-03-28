#include "main.h"
#include "2-strlen.c"
/**
 * puts_half - half string
 * @str : string pointer
 *
 */
void puts_half(char *str)
{
int n = _strlen(str);
int nn = n;
if (n % 2 == 1)
n = (n - 1) / 2;
else
n = n / 2;
int i;
for (i = 0; i < nn; i++)
{
_putcahr(str[i]);
}
_putchar('\n');
}

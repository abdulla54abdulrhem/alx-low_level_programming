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
int i;
if (n % 2 == 1)
n = (n - 1) / 2;
else
{
n = n / 2;
}
for (i = 0; i < nn; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}

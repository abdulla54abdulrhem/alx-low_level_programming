#include "main.h"
#include "2-strlen.c"
/**
 * puts2 - just even indx print
 * @str : pointer to string
 *
 */
void puts2(char *str)
{
int len = _strlen(str);
int i;
for (i = 0; i < len; i += 2)
{
_putchar((*str));
str++;
str++;
}
_putchar('\n');
}

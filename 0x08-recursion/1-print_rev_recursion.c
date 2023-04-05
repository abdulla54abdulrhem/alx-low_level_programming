#include "main.h"
/**
 * _print_rev_recursion - prints string in rev
 * 
 * @s : pointer to string
 *
 *
 */
void _print_rev_recursion(char *s)
{
char *tmp;
tmp = s;
if (*s)
{
_print_rev_recursion(++s);
_putchar(*tmp);
}
else
_putchar('\n');
}

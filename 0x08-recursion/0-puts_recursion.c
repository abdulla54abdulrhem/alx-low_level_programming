#include "main.h"
/**
 * _puts_recursion - prints a string
 *
 * @s : a pointer to string
 * 
 *
 */
void _puts_recursion(char *s)
{
if (*s)
{
_putchar(*s);
_put_recursion(++s);      
}
else
_putchar('\n');
}

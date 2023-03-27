#include "main.h"
#include "2-strlen.c"
/**
 * _puts - function thar prints a string
 * @str : pointer to a string
 *
 */
void _puts(char *str)
{
int len = _strlen(str);
int i;  
for (i = 0; i < len; i++)
{
_putchar((*str));
str++;
}
_putchar('\n');
}

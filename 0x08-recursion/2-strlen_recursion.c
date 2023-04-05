#include "main.h"
/**
* _strlen_recursion - returns the length of given string
* @s : pointer to string
*
* Return: length of string
*
*/
int _strlen_recursion(char *s)
{
int n;
n = 0;
if (*s)
{
n = _strlen_recursion(++s);
return (n += 1);
}
return (0);
}

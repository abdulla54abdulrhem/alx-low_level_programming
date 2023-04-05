#include "main.h"
/**
* help - looper
* @i : integer
* @n : integer
* Return: answer
*/
int help(int i, int n)
{
int j;
if (i *i != n)
{
if (i > n)
return (-1);
j = help(i + 1, n);
return (j + 1);
}
return (0);
}
/**
* _sqrt_recursion - sqrt
* @n : integer
* Return: the answer
*
*/
int _sqrt_recursion(int n)
{
int i;
i = 0;
if (help(i, n) == n && n != 1)
return (-1);
return (help(i, n));
}

#include "main.h"
/**
* _pow_recursion - calc x power y
* @x : integer
* @y : integer
* Return: x power to y
*/
int _pow_recursion(int x, int y)
{
int tmp;
int res;
if (y < 0)
return (-1);
if (y == 0)
return (1);
tmp = y / 2;
res = _pow_recursion(x, tmp);
if (y & 1)
{
return (res *res *x);
}
else
return (res *res);
}

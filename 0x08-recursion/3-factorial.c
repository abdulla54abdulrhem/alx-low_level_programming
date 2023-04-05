#inclue "main.h"
/**
* factorial - calc fact of number
* @n : integer value
* Return: the factorial of a number
*
*/
int factorial(int n)
{
if(n == 0)
{
return (1);
}
else
{
return n * factorial(n - 1);
}
}

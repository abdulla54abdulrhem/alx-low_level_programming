#include "main.h"
/**
* help - loop recursively
* @i : integer
* @n : integer
* Return: answer
*/
int help(int i, int n)
{
if (n % i == 0 && n != i)
return (0);
if (n % i != 0 && i < n)
return (help(i + 1, n));
return (1);
}
/**
* is_prime_number - if prime or not
* @n : integer
* Return: 1 if prime 0 if not
*/
int is_prime_number(int n)
{
int i;
i = 2;
if (n < 2)
return (0);
return (help(i, n));
}

#include "main.h"
/**
* is_prime_number - if prime or not
* @n : integer
* Return: 1 if prime 0 if not
*/
int is_prime_number(int n)
{
int ans;
int i;
ans = 1;
for (i = 2; i *i <= n; i++)
{
if (n % i == 0)
{
ans = 0;
break;
}
}
return (ans);
}

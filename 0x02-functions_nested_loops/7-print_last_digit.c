#include "main.h"
/**
 * print_last_digit - main function
 *
 * @n: integer to get last digit of
 * Return: last digit of n
 *
 */
int print_last_digit(int n)
{
int ans;
ans = n;
if (ans < 0)
{
ans = ans * -1;
}
ans = ans % 10;
_putchar('0' + ans);
return (ans);
}

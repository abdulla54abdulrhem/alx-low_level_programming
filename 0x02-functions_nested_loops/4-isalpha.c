#include "main.h"
/**
 * _isalpha - main function
 *
 * @c: character to compare
 *
 * Return: 1 if true, 0 if false
 *
 */
int _isalpha(int c)
{
char i;
for (i = 'a'; i <= 'z'; i++)
{
if (i == c)
{
return (1);
}
}
for (i = 'A'; i <= 'Z'; i++)
{
if (i == c)
{
return (1);
}
}
return (0);
}

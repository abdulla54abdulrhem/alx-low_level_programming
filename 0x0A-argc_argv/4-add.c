#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * checkNumber - check is string is number or not
 * @s : pointer to string
 * Return: zero or one
 */
int checkNumber(char *s)
{
  int i;
  for (i = 0; s[i] != '\0'; i++)
    {
      if (!isdigit(s[i]))
	return (0);
    }
  return (1);
}
/**
 * main - main function
 * @argc : integer
 * @argv : arg vector
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
int sum;
int i;
sum = 0;
for (i = 1; i < argc; i++)
{
if (checkNumber(argv[i]))
{
sum += atoi(argv[i]);
}
else
{
printf("Error\n");
return (1);
}
}
printf("%d\n",sum);
return (0);
}

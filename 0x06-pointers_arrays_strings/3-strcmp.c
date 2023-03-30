#include "main.h"
/**
 * _strcmp - compare 2 strings
 * @s1: pointer to a string
 * @s2: pointer to a string
 *
 * Return: integer value
 */
int _strcmp(char *s1, char *s2)
{
int ans;
int i;
int j;
i = 0;
j = 0;
ans = 0;
while (s1[i] != '\0' && s2[j] != '\0')
{
if (s1[i] > s2[j])
{
ans = 1;
break;
}
else if (s1[i] < s2[j])
{
ans = -1;
break;
}
i++;
j++;
}
return (ans);
}

#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * string_nconcat - concats strings
 * @s1: string one
 * @s2: string two
 * @n: n amount of bytes
 * Return: return a char val
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *tmp;
unsigned int i;
unsigned int len1;
unsigned int len2;
char *ans;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
len1 = 0;
len2 = 0;
tmp = s1;
while (*tmp != '\0')
{
len1++;
tmp++;
}
tmp = s2;
while (*tmp != '\0')
{
len2++;
tmp++;
}
if (len2 < n)
n = len2;
ans = malloc(sizeof(char) * n + len1 + 1);
if (ans == NULL)
return (NULL);
for (i = 0; i < len1; i++)
{
ans[i] = s1[i];
}
for (i = 0; i < n; i++)
ans[i + len1] = s2[i];
ans[i+len1] = '\0';
return (ans);
}

#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * string_nconcat - Concatenates two strings, up to n bytes of s2
 *
 * @s1: The first string
 * @s2: The second string
 * @n: The maximum number of bytes from s2 to concatenate
 *
 * Return: A pointer to the concatenated string or NULL if malloc fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *tmp, *ans;
	unsigned int i, len1 = 0, len2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	tmp = s1;
	while (*tmp)
	{
		len1++;
		tmp++;
	}

	tmp = s2;
	while (*tmp)
	{
		len2++;
		tmp++;
	}

	if (len2 < n)
		n = len2;

	ans = malloc(sizeof(char) * (len1 + n + 1));
	if (ans == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		ans[i] = s1[i];

	for (i = 0; i < n; i++)
		ans[i + len1] = s2[i];

	ans[i + len1] = '\0';
	return (ans);
}

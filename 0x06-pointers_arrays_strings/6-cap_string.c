#include "holberton.h"
/**
 * cap_string - uppers a lower
 * @s: character to make upper
 * Return: return value of upper
 */
char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;

	return (s);
}

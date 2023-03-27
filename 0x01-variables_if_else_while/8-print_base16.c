#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * Return:always return 0
 *
 */
int main(void)
{
char a;
int i;

for (i = 0; i <= 9; i++)
{
putchar(i + '0');
}
for (a = 'a'; a <= 'f'; a++)
{
putchar(a);
}
putchar('\n');
return (0);
}

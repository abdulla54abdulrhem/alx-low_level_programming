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
int a;

for (a = 0; a <= 9; a++)
{
putchar(a + '0');
}
putchar('\n');
return (0);
}

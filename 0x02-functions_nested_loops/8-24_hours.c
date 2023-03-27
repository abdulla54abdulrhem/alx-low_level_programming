#include "main.h"
/**
 * jack_bauer - main thing
 *
 */
void jack_bauer(void)
{
int i;
int j;
int fst;
int sec;

for (i = 0; i <= 23; i++)
{
for (j = 0; j <= 59; j++)
{
fst = i / 10;
sec = i % 10;
_putchar('0' + fst);
_putchar('0' + sec);
_putchar(':');
fst = j / 10;
sec = j % 10;
_putchar('0' + fst);
_putchar('0' + sec);
_putchar('\n');
}
}
}

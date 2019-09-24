#include "holberton.h"
/**
 * jack_bauer - entry point
 *
 * Return: Void
 */
void jack_bauer(void)
{
int s1, s2, m1, m2;
int l = 10;
for (m1 = 0; m1 <= 2; m1++)
{
for (m2 = 0; m2 < l; m2++)
{
if (m1 == 2)
l = 4;
for (s1 = 0; s1 < 6; s1++)
{
for (s2 = 0; s2 < 10; s2++)
{
_putchar(m1 + '0');
_putchar(m2 + '0');
_putchar(':');
_putchar(s1 + '0');
_putchar(s2 + '0');
_putchar('\n');
}
}
}
}
}

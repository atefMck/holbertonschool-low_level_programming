#include "holberton.h"
/**
 * print_times_table - entry point
 * times table
 * Return: Void
 */
void print_times_table(int n)
{
int i, j;
for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
  if ((((i * j) / 10) > 0) && (((i * j) / 100) == 0))
{
_putchar(' ');
_putchar(((i * j) / 10) + '0');
_putchar(((i * j) % 10) + '0');
}
  else if (((i * j) / 10) > 0)
else
{
if (j != 0)
{
_putchar(' ');
_putchar(' ');
}
_putchar((i * j) + '0');
}
if (j != 9)
_putchar(',');
}
_putchar('\n');
}
}

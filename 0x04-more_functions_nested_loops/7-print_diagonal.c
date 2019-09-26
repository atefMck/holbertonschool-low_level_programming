#include "holberton.h"
/**
 * print_diagonal - drawing time
 * @n: longeur de diag
 * Return: Always 0.
 */
void print_diagonal(int n)
{
int i, j;
if (n > 0)
{
for (i = 1; i <= n; i++)
{
for (j = 1; j <= i; j++)
{
if (j == i)
_putchar('\\');
else
_putchar(' ');
}
_putchar('\n');
}
}
else
_putchar('\n');
}

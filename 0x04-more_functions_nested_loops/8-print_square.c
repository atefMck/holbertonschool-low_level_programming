#include "holberton.h"
/**
 * print_square - drawing time
 * @size: square size
 * Return: Always 0.
 */
void print_square(int size)
{
int i, j;
if (size > 0)
{
for (i = 1; i <= size; i++)
{
for (j = 0; j < size; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
else
_putchar('\n');
}

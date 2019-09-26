#include "holberton.h"
/**
 * print_triangle - drawing time
 * @size: size of triangle
 * Return: Always 0.
 */
void print_triangle(int size)
{
int i,j;
for(i = size; i > 0; i--)
{
for(j = 1; j <= size; j++)
{
if (j >= i)
_putchar('#');
 else if (j < i)
_putchar(' ');
}
_putchar('\n');
}
}

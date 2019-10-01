#include "holberton.h"
#include <stdio.h>
/**
 * print_rev - prints a string in reverse
 * @s: the string to print in reverse
 * Return: void.
 */
void print_rev(char *s)
{
int i;
for (i = 0; *(s + i); i++);
char c;
for (; i > 0; i--)
{
c = *(s + i - 1);
_putchar(c);
}
_putchar('\n');
}

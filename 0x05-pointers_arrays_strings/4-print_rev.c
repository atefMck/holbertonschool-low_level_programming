#include "holberton.h"
/**
 * print_rev - prints a string in reverse
 * @s: the string to print in reverse
 * Return: void.
 */
void print_rev(char *s)
{
int i = 0;
while (*(s + i))
i++;
i--;
int n = i;
char c;
while (n >= 0)
{
c = *(s + n);
_putchar(c);
n--;
}
_putchar('\n');
}

#include "holberton.h"
#include <string.h>
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
char c;
while (i > 0)
{
c = *(s + i - 1);
_putchar(c);
i--;
}
_putchar('\n');
}

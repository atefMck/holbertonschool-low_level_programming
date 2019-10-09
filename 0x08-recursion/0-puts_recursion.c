#include "holberton.h"
#include <stdio.h>

/**
* _puts_recursion - fills memory with a constant byte.
* @s: the memory area to print in
* Return: void.
*/

void _puts_recursion(char *s)
{
int i = 0;
if (s[i] == '\0')
{
_putchar('\n');
return;
}
_putchar(s[i]);
i++;
_puts_recursion(s + i);
}

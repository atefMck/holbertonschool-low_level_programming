#include "holberton.h"
#include <stdio.h>

/**
* _print_rev_recursion - fills memory with a constant byte.
* @s: the memory area to print in
* Return: void.
*/

void _print_rev_recursion(char *s)
{
if (*s != '\0')
{
_print_rev_recursion(s+1);
printf("%c", *s);
}
}

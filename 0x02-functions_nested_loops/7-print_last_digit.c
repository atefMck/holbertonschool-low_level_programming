#include "holberton.h"
/**
 * print_last_digit - entry point
 * @c: number to  check
 * Return: Always 0 (Success)
 */
int print_last_digit(int c)
{
int ld = c % 10;
if (ld < 0)
ld = -ld;
_putchar(ld + '0');
return (ld);
}

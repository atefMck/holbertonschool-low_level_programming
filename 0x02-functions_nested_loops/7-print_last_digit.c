#include "holberton.h"
/**
 * print_last_digit - entry point
 * @c: number to  check
 * Return: Always 0 (Success)
 */
int print_last_digit(int c)
{
if (c < 0)
c = -c;
int ld = c % 10;
_putchar(ld + '0');
return (ld);
}

#include "holberton.h"
/**
 * print_last_digit - entry point
 * @c: number to  check
 * Return: Always 0 (Success)
 */
int print_last_digit(int c)
{
int ld = c % 10;
if (c < 0)
c = -c;
_putchar(ld + '0');
return (ld);
}

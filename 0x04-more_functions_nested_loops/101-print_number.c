#include "holberton.h"
/**
 * print_number - print a number.
 * @n: the number to print
 * Return: Always 0.
 */
void print_number(int n)
{
if (n > 0)
{
while (n >= 0)
{
_putchar(n % 10 + '0');
n /= 10;
}
}
else
{
n *= -1;
_putchar('-');
while (n != 0)
{
_putchar(n % 10 + '0');
n /= 10;
}
}
}

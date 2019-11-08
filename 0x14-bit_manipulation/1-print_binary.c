#include "holberton.h"

/**
* print_binary - convert and print to binary
* @n: integer to convert
* Return: Void
*/
void print_binary(unsigned long int n)
{
int i;
int r = n, rev = 0;

if (n == 0)
{
_putchar('0');
return;
}

while (r > 0)
{
rev <<= 1;
if ((r & 1) == 1)
rev ^= 1;
r >>= 1;
}

while (n > 0)
{
i = 1 & rev;
rev = rev >> 1;
n = n >> 1;
_putchar(i + '0');
}
}

#include <unistd.h>
#include "holberton.h"
#include <stdio.h>
/**
* print_number - copie n bytes of a string
* @n: The destination string
* Return: void.
*/
void print_number(int n)
{
unsigned int div = 1,  l = n;

if (l < 0)
{
l = -l;
_putchar('-');
}
unsigned int m = l;
while (l >= 10)
{
div *= 10;
l /= 10;
}
for (; div != 0; div /= 10)
{
_putchar(m / div + '0');
m %= div;
}
}

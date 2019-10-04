#include "holberton.h"
/**
* print_number - copie n bytes of a string
* @n: The destination string
* Return: void.
*/
void print_number(int n)
{
int div = 1,  l = n, ld;
if (l < 0)
{
l = -l;
_putchar('-');
}
if (l < 9) {
div = 0;
}
ld = l % 10;
l = l / 10;
int m = l;
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
_putchar(ld + '0');
}

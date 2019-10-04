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
int div = 1;
if (n < 0) {
n = -n;
_putchar('-');
}
int m = n;
while(n > 9)
{
div *= 10;
n /= 10;
}
do
{
_putchar(m / div + '0');
m %= div;
div /= 10;
}
while(div != 0);
}

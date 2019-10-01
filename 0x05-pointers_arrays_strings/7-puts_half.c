#include "holberton.h"
/**
 * puts_half - prints second half of string
 * @str: string to print.
 * Return: none.
 */
void puts_half(char *str)
{
int i,j,k;
for (i = 0; str[i]; i++)
;
k = i;
i /= 2;
if (k % 2 != 0)
k++;
for (j = 0; j < k; j++)
{
if (j >= i)
_putchar(str[j]);
}
_putchar('\n');
}

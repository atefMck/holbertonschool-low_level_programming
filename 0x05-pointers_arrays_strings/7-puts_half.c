#include "holberton.h"
/**
 * puts_half - prints second half of string
 * @str: string to print.
 * Return: none.
 */
void puts_half(char *str)
{
int i;
for (i = 0; str[i]; i++)
;
int j;
if (i % 2 != 0)
j = (i - 1) / 2;
else
j = i / 2;
for (; j < i; j++)
_putchar(str[j]);
_putchar('\n');
}

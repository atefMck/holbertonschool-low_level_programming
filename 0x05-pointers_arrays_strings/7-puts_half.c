#include "holberton.h"
/**
 * puts_half - prints second half of string
 * @str: string to print.
 * Return: none.
 */
void puts_half(char *str)
{
int i = 0;
while (*(str + i))
i++;
char c;
int j = i;
if (j % 2 != 0)
j = i / 2 - 1;
else
j = i / 2;
for (; j <= i; j++)
{
c = *(str + j);
_putchar(c);
}
_putchar('\n');
}

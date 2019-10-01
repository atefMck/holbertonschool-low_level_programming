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
int j;
for (j = i / 2; j <= i; j++)
{
c = *(str + j);
_putchar(c);
}
_putchar('\n');
}

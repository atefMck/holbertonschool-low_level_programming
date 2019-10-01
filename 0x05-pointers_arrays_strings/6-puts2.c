#include <unistd.h>
#include "holberton.h"
/**
 * puts2 - prints every other char of a string
 * @str: the string to print
 * Return: void.
 */
void puts2(char *str)
{
int i = 0;
char c;
while (*(str + i))
{
if (i % 2 == 0)
{
c = *(str + i);
_putchar(c);
}
i++;
}
_putchar('\n');
}

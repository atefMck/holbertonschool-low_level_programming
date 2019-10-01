#include "holberton.h"
/**
 * rev_string - reverse a string
 * @s: the string to reverse
 * Return: void.
 */
void rev_string(char *s)
{
int i, j;
for (j = 0; *(s + j); j++)
;
char c;
for (i = 0; i < j / 2; i++)
{
c = *(s + i);
*(s + i) = *(j - i -1);
*(s - j -1) = c;
}
}

#include <unistd.h>
#include "holberton.h"
/**
 * rev_string - reverse a string
 * @s: the string to reverse
 * Return: void.
 */
void rev_string(char *s)
{
int i, j;
for (i = 0; *(s + i); i++)
;
int k = i;
char c;
for (j = 0; j <= k / 2; j++)
{
c = *(s + j);
*(s + j) = *(s + i -1);
*(s + i -1) = c;
i--;
}
}

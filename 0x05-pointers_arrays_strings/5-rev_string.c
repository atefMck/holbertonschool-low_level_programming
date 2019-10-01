#include <unistd.h>
#include "holberton.h"
/**
 * rev_string - reverse a string
 * @s: the string to reverse
 * Return: void.
 */
void rev_string(char *s)
{
int i = 0, j = 0;
while (*(s + i))
i++;
i--;
char c;
int k = i;
for (j = 0; j <= k / 2; j++)
{
c = *(s + j);
*(s + j) = *(s + i);
*(s + i) = c;
i--;
}
}

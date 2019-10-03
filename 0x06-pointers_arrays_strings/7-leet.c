#include <unistd.h>
#include "holberton.h"
/**
* leet - copie n bytes of a string
* @s: The destination string
* Return: s.
*/
char *leet(char *s)
{
int i, j;
char a[] = {'A', 'E', 'O', 'T', 'L'};
char b[] = {'a', 'e', 'o', 't', 'l'};
char c[] = {'4', '3', '0', '7', '1'};
for (i = 0; s[i]; i++)
{
for (j = 0; j <= 5; j++)
{
if (s[i] == a[j] || s[i] == b[j])
{
s[i] = c[j];
break;
}
}
}
return (s);
}

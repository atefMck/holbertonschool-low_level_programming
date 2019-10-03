#include <unistd.h>
#include "holberton.h"
/**
* rot13 - copie n bytes of a string
* @s: The destination string
* Return: s.
*/
char *rot13(char *s)
{
int i, j;
char a[] = "abcdefghijklmABCDEFGHIJKLMnopqrstuvwxyzNOPQRSTUVWXYZ";
char b[] = "nopqrstuvwxyzNOPQRSTUVWXYZabcdefghijklmABCDEFGHIJKLM";
for (i = 0; s[i]; i++)
{
for (j = 0; a[j]; j++)
{
if (s[i] == a[j])
{
s[i] = b[j];
break;
}
}
}
return (s);
}

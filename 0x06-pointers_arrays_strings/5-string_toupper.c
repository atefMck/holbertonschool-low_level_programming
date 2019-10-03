#include <unistd.h>
#include "holberton.h"
/**
* string_toupper - copie n bytes of a string
* @s: The destination string
* Return: s.
*/
char *string_toupper(char *s)
{
int i;
while (s[i])
{
if (s[i] >= 97 && s[i] <= 122) {
s[i] -= 32;
}
i++;
}
return (s);
}

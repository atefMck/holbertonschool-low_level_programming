#include "holberton.h"
/**
 * _strcpy - copies string to another
 * @dest: the string to copy in
 * @src: the string to copy from
 * Return: dest.
 */
char *_strcpy(char *dest, char *src)
{
int i;
for (i = 0; *(src + i); i++)
{
*(dest + i) = *(src + i);
}
*(dest + i) = *(src + i);
return (dest);
}

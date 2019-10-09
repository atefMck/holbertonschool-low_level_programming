#include "holberton.h"
#include <stdio.h>

/**
* is_prime_number - fills memory with a constant byte.
* @n: the memory area to print in
* Return: void.
*/

int is_palindrome(char *s)
{
char *chend = s;
return (verifypal(s, movend(chend)));
}

/**
* prime - fills memory with a constant byte.
* @a: the memory area to print in
* @b: the memory area to print in
* Return: int
*/

char *movend(char *a)
{
if (*a)
return (a - 1);
else
return(movend(a + 1));
}

/**
* prime - fills memory with a constant byte.
* @a: the memory area to print in
* @b: the memory area to print in
* Return: int
*/

int verifypal(char *b, char *c)
{
if (*b != *c)
return (0);
if (b == c || b > c)
return (1);
return(verifypal(b + 1, c - 1));
}

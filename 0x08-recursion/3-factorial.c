#include "holberton.h"
#include <stdio.h>

/**
* factorial - fills memory with a constant byte.
* @s: the memory area to print in
* Return: void.
*/

int factorial(int n)
{
if (n < 0)
return (-1);
if (n == 0)
return (1);
return (n * factorial(n-1));
}

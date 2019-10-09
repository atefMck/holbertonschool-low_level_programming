#include "holberton.h"
#include <stdio.h>

/**
* is_prime_number - fills memory with a constant byte.
* @n: the memory area to print in
* Return: void.
*/

int is_prime_number(int n)
{
if (n <= 1)
return (0);
return (prime(n, n / 2));
}

/**
* prime - fills memory with a constant byte.
* @a: the memory area to print in
* @b: the memory area to print in
* Return: int
*/

int prime(int a, int b)
{
if (a % b == 0)
return (0);
else
prime(a, b - 1);
return (1);
}

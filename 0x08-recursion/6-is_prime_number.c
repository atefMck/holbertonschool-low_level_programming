#include "holberton.h"
#include <stdio.h>

/**
* _pow_recursion - fills memory with a constant byte.
* @n: the memory area to print in
* Return: void.
*/

int is_prime_number(int n)
{
  if (n <= 1)
    return (0);
  return (prime(n, n / 2));
}

int prime(int a, int b)
{
  if (a % b == 0)
  return (0);
  else
  prime(a, b - 1);
  return (1);
}

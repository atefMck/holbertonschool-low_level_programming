#include "holberton.h"
#include <stdio.h>

/**
* _sqrt_recursion - fills memory with a constant byte.
* @n: the memory area to print in
* Return: int.
*/


int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
else
return (sqrCheck(n, (n + 1) / 2));
}

/**
* sqrCheck - fills memory with a constant byte.
* @a: the memory area to print in
* @b: to busy for desc :(
* Return: int.
*/

int sqrCheck(int a, int b)
{
	if (b * b == a)
		return (b);
	else if (b == 1)
		return (-1);
	else
		return (sqrCheck(a, b - 1));
}

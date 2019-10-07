#include "holberton.h"
#include <stdio.h>

/**
* print_diagsums - fills memory with a constant byte.
* @a: the memory area to print in
* @size: the memory area to print in
* Return: void.
*/

void print_diagsums(int *a, int size)
{
int i = 0, r1 = 0, r2 = 0;
for (i = 0; i < size; i++)
{
r1 += a[i * size + i];
r2 += a[(i * size) + (size - 1 - i)];
}
printf("%d, %d\n", r1, r2);
}

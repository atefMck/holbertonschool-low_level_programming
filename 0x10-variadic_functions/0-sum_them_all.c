#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
* sum_them_all - sums all the arguments
* @n: number of args
* Return: the sum
*/

int sum_them_all(const unsigned int n, ...)
{
va_list obj;
unsigned int i;
int sum = 0;

if (n <=0)
return (0);

va_start(obj, n);

for (i = 0; i < n; i++)
sum += va_arg(obj, int);

va_end(obj);
return (sum);
}

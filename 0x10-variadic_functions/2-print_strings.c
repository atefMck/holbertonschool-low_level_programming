#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
* print_numbers - prints all numbers in arguments
* @separator: the seperator
* @n: number of args
* Return: void
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
va_list obj;
unsigned int i;
char *ch;

va_start(obj, n);

for (i = 0; i < n; i++)
{
ch = va_arg(obj, char *);
if (ch == NULL)
printf("(nil)");
else
printf("%s", ch);
if (separator != NULL && (i + 1) != n)
printf("%s", separator);
}

va_end(obj);
printf("\n");
}

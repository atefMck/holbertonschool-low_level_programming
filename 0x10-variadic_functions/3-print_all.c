#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
* printChar - prints a char for args
* @lol: the arg
* Return: void
*/
void printChar(va_list lol)
{
printf("%c", va_arg(lol, int));
}

/**
* printInt - prints an int for args
* @lol: the arg
* Return: void
*/
void printInt(va_list lol)
{
printf("%d", va_arg(lol, int));
}

/**
* printFloat - prints a float for args
* @lol: the arg
* Return: void
*/
void printFloat(va_list lol)
{
printf("%f", va_arg(lol, double));
}

/**
* printString - prints a string for args
* @lol: the arg
* Return: void
*/
void printString(va_list lol)
{
char *ch;
ch = va_arg(lol, char *);
if (ch == NULL)
ch = "(nil)";
printf("%s", ch);
}

/**
* print_all - prints all arguments
* @format: the format
* Return: void
*/

void print_all(const char * const format, ...)
{
form mind[] = {
{"c", printChar},
{"i", printInt},
{"f", printFloat},
{"s", printString},
{NULL, NULL},
};
unsigned int i = 0, j;
char *sep = "";
va_list obj;

va_start(obj, format);

while (format[i] && format)
{
j = 0;
while (mind[j].cond)
{
if (*(mind[j].cond) == format[i])
{
printf("%s", sep);
mind[j].printType(obj);
sep = ", ";
break;
}
j++;
}
i++;
}

va_end(obj);
printf("\n");
}

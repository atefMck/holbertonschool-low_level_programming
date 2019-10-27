#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

void printChar(va_list lol);
void printInt(va_list lol);
void printFloat(va_list lol);
void printString(va_list lol);

/**
* form - struct
* @format: the format
* Return: void
*/

typedef struct form {
  char cond;
  void (*printType)(va_list lol);
} form;

/**
* print_all - prints all arguments
* @format: the format
* Return: void
*/

void print_all(const char * const format, ...)
{
form mind[] = {
  {'c', printChar},
  {'i', printInt},
  {'f', printFloat},
  {'s', printString},
  {0, NULL},
};
int i = 0, j = 0;
va_list obj;

va_start(obj, format);

while (format[i])
{
  while (mind[j].cond)
  {
    if (mind[j].cond == format[i])
    {
      mind[j].printType(obj);
      if (format[i + 1]) {
        printf(", ");
      }
    }
    j++;
  }
  j = 0;
  i++;
}

va_end(obj);
printf("\n");
}

void printChar(va_list lol)
{
  printf("%c", va_arg(lol, int));
}

void printInt(va_list lol)
{
  printf("%d", va_arg(lol, int));
}

void printFloat(va_list lol)
{
  printf("%f", va_arg(lol, double));
}

void printString(va_list lol)
{
  char *ch;
  ch = va_arg(lol, char *);
  if (ch == NULL)
  {
  printf("(nil)");
  return;
  }
  printf("%s", ch);
}

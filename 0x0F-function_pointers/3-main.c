#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
* main - main calculator
* @argc: num of argument
* @argv: array of argument
* Return: pointer to corresponding function.
*/

int main(int argc, char *argv[])
{

int (*operation)(int, int);
int r;
int a;
int b;

if (argc != 4)
{
printf("Error\n");
exit(98);
}

operation = get_op_func(argv[2]);
a = atoi(argv[1]);
b = atoi(argv[3]);

if (operation == NULL || argv[2][1] != '\0')
{
printf("Error\n");
exit(99);
}
if (b == 0 && (operation == op_div || operation == op_mod))
{
printf("Error\n");
exit(100);
}

r = operation(a, b);
printf("%d\n", r);
return (0);
}

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
* main - print numb of args.
* @argc: number of args
* @argv: the actual arguments
* Return: Void.
*/

int main(int argc, char *argv[])
{
int i;
int sum = 0;
for (i = 1; i < argc; i++)
{
if (atoi(argv[i]))
sum += atoi(argv[i]);
else
{
printf("Error\n");
return (1);
}
}
printf("%d\n", sum);
return (0);
}

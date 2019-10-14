#include <stdio.h>
#include <stdlib.h>

/**
 * main - print numb of args.
 * @argc: number of args
 * @argv: the actual arguments
 * Return: Void.
 */

int main(int argc, char *argv[])
{
int sum;
if (argc == 3)
{
sum = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", sum);
}
else
printf("Error\n");

}

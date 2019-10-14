#include <stdio.h>

/**
 * main - print numb of args.
 * @argc: number of args
 * @argv: the actual arguments
 * Return: Void.
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
printf("%d\n", argc - 1);
return (0);
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * positive or negative
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
int c;
c = n % 10;
if (c > 5)
{
printf("Last digit of %d is %d and is greater than 5\n");
}
else if (c == 0)
{
printf("Last digit of %d is %d and is 0\n");
}
else if (c < 6)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n");
}
return (0);
}

#include <stdio.h>
int main(void)
{
int integerType;
long longintType;
long long llongintType;
float floatType;
char charType;

printf("Size of char: %ld byte\n", sizeof(charType));
printf("Size of int: %ld bytes\n", sizeof(integerType));
printf("Size of long int: %ld bytes\n", sizeof(longintType));
printf("Size of long long int: %ld bytes\n", sizeof(llongintType));
printf("Size of float: %ld bytes\n", sizeof(floatType));
return (0);
}

#include <stdio.h>
int main(void)
{
int integerType;
long longintType;
long long llongintType;
float floatType;
char charType;

printf("Size of char: %d byte\n", sizeof(charType));
printf("Size of int: %d bytes\n", sizeof(integerType));
printf("Size of long int: %d bytes\n", sizeof(longintType));
printf("Size of long long int: %d bytes\n", sizeof(llongintType));
printf("Size of float: %d bytes\n", sizeof(floatType));
return (0);
}

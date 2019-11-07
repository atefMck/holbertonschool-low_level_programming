#include "holberton.h"

/**
* power - a ^ b
* @a: member1
* @b: member2
* Return: a ^ b =
*/
int power(int a, int b)
{
int r = a;
if (b == 0)
return (1);

for (; b > 1; b--)
a *= r;
return (a);
}

/**
* binary_to_uint - converts binary to unsigned int
* @b: pointing to string of 0 and 1
* Return: converted number or 0
*/
unsigned int binary_to_uint(const char *b)
{
int len = 0, r = 0;
int i, lenf;

if (b == NULL)
return (0);


while (b[len])
len++;
len--;

lenf = len;
for (i = 0; i <= lenf; i++)
{
if (b[i] != '1' && b[i] != '0')
return (0);
if (b[i] == '1')
r += power(2, len);
len--;
}

return (r);
}

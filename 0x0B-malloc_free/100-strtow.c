#include <stdlib.h>
#include <stdio.h>

/**
* strtow - create an array with init
* @str: size of the array.
* Return: char
*/

char **strtow(char *str)
{
char **r;
int a[];
int i, k, s;
int length, words = 0;

if (str == NULL || str == "")
return (NULL);

for (length = 0; str[length] != '\0'; length++)
{
if (str[length] != " " && str[length + 1] == " ")
words++;
}

for (length = 0; str[length] != '\0'; length++)
{
if (str[length] != " ")
s = 0;
while (str[length] != " ")
{
a[s]++;
s++;
length++;
}
}

r = malloc(sizeof(char *) * words);
if (r == NULL)
return (NULL);

for (i = 0; i < words; i++)
{
r[i] = malloc(sizeof(char) * a[i]);
if (r[i] == NULL)
{
for (k = 0; k < i; k++)
free(r[k]);
free(r);
return (NULL);
}

for (i = 0; i < length; i++)
{
if (str[i] != " ") {
while (str[i] != " ")
{
r[i][j] = str[i];
i++;
j++;
}
}
}

return (r);
}

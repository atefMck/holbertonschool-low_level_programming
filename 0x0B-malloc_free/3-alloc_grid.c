#include <stdlib.h>
#include <stdio.h>

/**
* alloc_grid - create an array with init
* @width: size of the array.
* @height: size of the array.
* Return: the array created
*/

int **alloc_grid(int width, int height)
{
if (width <= 0 || height <= 0)
return NULL;
else
{

int **r;
int i = 0;
int j = 0;
r = malloc(sizeof(int) * height);
while (i < height)
{
r[i] = malloc(sizeof(int) * width);
i++;
}

while (i < height)
{
while (j < width)
{
r[i][j] = 0;
j++;
}
i++;
}

return (r);
}
}

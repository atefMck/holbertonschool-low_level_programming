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

int **r;
int i = 0;
int j = 0;

if (width <= 0 || height <= 0)
return (NULL);

r = malloc(sizeof(int) * height);
if (r == NULL)
return (NULL);

while (i < height)
{
r[i] = malloc(sizeof(int) * width);
if (r[i] == NULL)
return (NULL);
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

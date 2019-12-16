#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

/**
* rand - overwriting the rand function
*
* Return: 0 on success
*/
int rand(void)
{
static int number = 1;
number++;
switch (number)
{
case 2:
return (9);
break;
case 3:
return (8);
break;
case 4:
return (10);
break;
case 5:
return (24);
break;
case 6:
return (75);
break;
case 7:
return (9);
break;
default:
break;
}
}

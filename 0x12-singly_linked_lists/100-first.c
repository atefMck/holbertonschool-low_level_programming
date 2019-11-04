#include "lists.h"
#include <string.h>
#include <stdlib.h>


void myStartupFun(void) __attribute__ ((constructor));

/**
* myStartupFun - print items in a list
*
* Return: void
*/
void myStartupFun(void)
{
printf("You're beat! and yet, you must allow,\nI bore my house
upon my back!\n");
}

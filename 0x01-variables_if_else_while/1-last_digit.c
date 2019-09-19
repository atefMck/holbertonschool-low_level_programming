#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	int c;
	c = n % 10;
	printf("Last digit of %d is %d ",n,c);
	if (c > 5)
	  {
	    printf("and is greater than 5");
	  } else if (c == 0)
	  {
	    printf("and is 0");
	  } else if (c < 6)
	  {
	    printf("and is less than 6 and not 0");
	  }
	printf("\n");
	return (0);
}

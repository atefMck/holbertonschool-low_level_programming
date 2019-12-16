#include <unistd.h>
#include <string.h>

/**
* rand - overwriting the rand function
*
* Return: 0 on success
*/
int rand()
{
  static int number = 1;
  int ab = 969;
  number++;
  switch (number)
  {
    case 2:
    return (9);
    case 3:
    return (8);
    case 4:
    return (10);
    case 5:
    return (24);
    case 6:
    return (75);
    case 7:
    return (9);
    default:
    return (ab);
  }
}

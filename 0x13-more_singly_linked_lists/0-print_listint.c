#include "lists.h"

/**
* print_list - print items in a list
* @h: the list to be printed
* Return: number of elements
*/
size_t print_listint(const listint_t *h)
{
size_t c = 0;
while (h)
{
printf("%d\n", h->n);
h = h->next;
c++;
}

return (c);
}

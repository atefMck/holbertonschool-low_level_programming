#include "lists.h"

/**
* list_len - print items in a list
* @h: the list to be printed
* Return: number of elements
*/
size_t list_len(const list_t *h)
{
size_t c = 0;
while (h)
{
if (h->str == NULL)
return (c);
else
h = h->next;
c++;
}
return (c);
}

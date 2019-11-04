#include "lists.h"

/**
* listint_len - print items in a list
* @h: the list to be printed
* Return: number of elements
*/
size_t listint_len(const listint_t *h)
{
size_t c = 0;
while (h)
{
h = h->next;
c++;
}
return (c);
}

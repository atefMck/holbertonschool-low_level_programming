#include "lists.h"

/**
* dlistint_len - print elements of list
* @h: doubly linked list to print
* Return: num of elements
*/
size_t dlistint_len(const dlistint_t *h)
{
size_t num = 0;
while (h)
{
h = h->next;
num++;
}
return (num);
}

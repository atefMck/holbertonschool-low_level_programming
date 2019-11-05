#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
* print_listint_safe - hmmmm
* @head: hmmmmm
* Return: num of nodes
*/
size_t print_listint_safe(const listint_t *head)
{
// listint_t *temp;
size_t c = 0, i = 0;

// temp = head->next;
while (head && i != 15)
{
// if (temp != head)
// {
printf("[%p] %d\n", (void *)head,head->n);
head = head->next;
// temp = head->next;
c++;
// }
// else
// {
// printf("[%p] %d\n", (void *)head,head->n);
// free_listint(temp);
// }
i++;
}
return (c);
}


/**
* free_listint - print items in a list
* @head: the list to be printed
* Return: modified list
*/
void free_listint(listint_t *head)
{
listint_t *temp;

while (head != NULL)
{
temp = head;
head = head->next;
free(temp);
}
}

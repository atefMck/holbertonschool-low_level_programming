#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
* sum_listint - sum of a linked list
* @head: listint_t
* Return: integer
*/
int sum_listint(listint_t *head)
{
int sum = 0;

if (head == NULL)
return (0);


while (head)
{
sum += head->n;
head = head->next;
}

return (sum);
}

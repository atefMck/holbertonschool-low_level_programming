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
int i = 0;

if (head == NULL)
return (i);


while (head)
{
i += head->n;
head = head->next;
}

return (i);
}

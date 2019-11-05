#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
* delete_nodeint_at_index - hmmmm
* @head: hmmmmm
* @index: hmmm
* Return: 1 or -1
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *temp, *aux;
if (*head == NULL)
return (-1);

temp = *head;
if (index == 0)
{
*head = temp->next;
free(temp);
return (1);
}

index--;
while (index != 0)
{
temp = temp->next;
if (temp == NULL)
return (-1);
index--;
}
aux = temp->next;
temp->next = aux->next;
free(aux);
return (1);
}

#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
* reverse_listint - hmmmm
* @head: hmmmmm
* Return: 1 or -1
*/
listint_t *reverse_listint(listint_t **head)
{
listint_t *temp, *aux;
temp = NULL;

if (*head == NULL)
return (NULL);

while (*head)
{
aux = *head;
*head = aux->next;
aux->next = temp;
temp = aux;
}
*head = temp;
return (*head);
}

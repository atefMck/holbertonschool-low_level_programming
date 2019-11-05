#include "lists.h"

/**
* pop_listint - print items in a list
* @head: the list to be printed
* Return: modified list
*/
int pop_listint(listint_t **head)
{
listint_t *temp;
int r;

if (head == NULL)
return (0);

temp = *head;
r = (*head)->n;
*head = (*head)->next;
free(temp);

return (r);
}

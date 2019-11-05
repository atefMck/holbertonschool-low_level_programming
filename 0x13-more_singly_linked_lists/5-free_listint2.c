#include "lists.h"

/**
* free_listint2 - print items in a list
* @head: the list to be printed
* Return: modified list
*/
void free_listint2(listint_t **head)
{
listint_t *temp;

while (*head != NULL)
{
temp = *head;
*head = (*head)->next;
free(temp);
}
*head = NULL;
}

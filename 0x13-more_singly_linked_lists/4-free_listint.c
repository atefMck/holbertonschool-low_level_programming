#include "lists.h"

/**
* add_nodeint_end - print items in a list
* @head: the list to be printed
* @str: the value
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

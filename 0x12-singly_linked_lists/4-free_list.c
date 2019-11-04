#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
* free_list - print items in a list
* @head: the list to be printed
* Return: modified list
*/
void free_list(list_t *head)
{
list_t *temp;

while (head != NULL)
{
temp = head;
head = head->next;
free(temp->str);
free(temp);
}
}

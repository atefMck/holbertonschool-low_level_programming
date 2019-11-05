#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
* add_nodeint_end - print items in a list
* @head: the list to be printed
* @n: the value
* Return: modified list
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *newNode, *temp;

newNode = malloc(sizeof(listint_t));
if (newNode == NULL)
return (NULL);

newNode->n = n;
newNode->next = NULL;

if (*head == NULL)
*head = newNode;
else
{
temp = *head;
while (temp->next)
temp = temp->next;
temp->next = newNode;
}

return (newNode);
}

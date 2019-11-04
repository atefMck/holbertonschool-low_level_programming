#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
* add_node_end - print items in a list
* @head: the list to be printed
* @str: the value
* Return: modified list
*/
list_t *add_node_end(list_t **head, const char *str)
{
list_t *newNode, *temp;
unsigned int c = 0;

newNode = malloc(sizeof(list_t));
if (newNode == NULL)
return (NULL);

while (str[c])
c++;

newNode->str = strdup(str);
newNode->len = c;
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

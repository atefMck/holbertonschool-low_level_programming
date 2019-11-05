#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
* insert_nodeint_at_index - get node at index
* @head: listint_t
* @idx: position of the new node to insert
* @n: data inserted
* Return: adress of new node
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *newNode, *temp;
if (head == NULL)
return (NULL);

newNode = malloc(sizeof(listint_t));

if (newNode == NULL)
return (NULL);
newNode->n = n;

temp = *head;
if (idx == 0)
{
newNode->next = temp;
*head = newNode;
return (newNode);
}

idx--;
while (idx != 0)
{
temp = temp->next;
if (temp == NULL)
return (NULL);
idx--;
}

newNode->next = temp->next;
temp->next = newNode;
return (newNode);
}

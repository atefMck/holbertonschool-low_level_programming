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
listint_t *node, *temp;
unsigned int i;

if (*head == NULL)
return (NULL);
temp = *head;

node = malloc(sizeof(listint_t));
if (node == NULL)
return (NULL);
node->n = n;


i = 0;
while (temp && i + 1 < idx)
{
temp = temp->next;
i++;
}

node->next = temp->next;
temp->next = node;
return (node);

}

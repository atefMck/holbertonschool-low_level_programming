#include "lists.h"

/**
* add_nodeint - print items in a list
* @head: the list to be printed
* @n: the value
* Return: modified list
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *newNode;
newNode = malloc(sizeof(listint_t));
if (newNode == NULL)
return (NULL);

newNode->n = n;
newNode->next = *head;
*head = newNode;

return (newNode);
}

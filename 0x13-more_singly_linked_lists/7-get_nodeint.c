#include "lists.h"

/**
* get_nodeint_at_index - print items in a list
* @head: the list to be printed
* @index: the list to be printed
* Return: modified list
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i = 0;
listint_t *temp;
temp = head;

if (temp == NULL)
return (NULL);

while (temp && i <= index)
{
if (i == index)
return (temp);
i++;
temp = temp->next;
}
return (NULL);
}

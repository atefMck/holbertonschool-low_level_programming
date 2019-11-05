#include "lists.h"

/**
* print_listint_safe - prints a linked list.
* @head: head of a list.//Aladin Bensassi
* Return: number of nodes in the list.
*/
size_t print_listint_safe(const listint_t *head)
{
size_t c = 0;
listint_t *temp, *aux, *flag;

flag = malloc(sizeof(listint_t));
if (flag == NULL)
exit(98);

flag->n = 969696;
flag->next = NULL;
temp = (void *)head;

while (temp)
{
if (temp->next == flag)
{
printf("-> [%p] %d\n", (void *)temp->next, temp->n);
free_listint(temp);
return (c);
}
else
printf("[%p] %d\n", (void *)temp, temp->n);
aux = temp;
temp = temp->next;
aux->next = flag;
c++;
}
free_listint(flag);
return (c);
}


/**
* free_listint - print items in a list
* @head: the list to be printed
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

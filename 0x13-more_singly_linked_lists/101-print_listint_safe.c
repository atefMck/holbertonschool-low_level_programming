#include "lists.h"

/**
* print_listint_safe - prints a linked list.
* @head: head of a list.//Aladin Bensassi
* Return: number of nodes in the list.
*/
size_t print_listint_safe(const listint_t *head)
{
size_t c = 0;
int i = 0;
listint_t *temp, *fast, *slow;

temp = (void *)head;
fast = temp;
slow = temp;

if (temp == NULL)
exit(98);

if (temp->next == NULL)
{
printf("[%p] %d\n", (void *)temp, temp->n);
c++;
return (c);
}

if (temp->next == temp)
{
printf("[%p] %d\n", (void *)temp, temp->n);
printf("-> [%p] %d\n", (void *)temp, temp->n);
c++;
return (c);
}

while (fast && fast->next)
{
slow = slow->next;
fast = fast->next->next;
if (slow == fast)
{
slow = temp;
while (slow != fast)
{
slow = slow->next;
fast = fast->next;
}
break;
}
}

while (temp && i < 1)
{
printf("[%p] %d\n", (void *)temp, temp->n);
temp = temp->next;
c++;
if (temp == slow)
i++;
}
if (temp == slow)
printf("-> [%p] %d\n", (void *)slow, slow->n);
return (c);
}

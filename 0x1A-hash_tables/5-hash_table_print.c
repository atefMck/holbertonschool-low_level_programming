#include "hash_tables.h"

/**
* hash_table_print - prints a hash table
* @ht: the hash table
* Return: void
*/
void hash_table_print(const hash_table_t *ht)
{
hash_node_t *node;
unsigned int  i;
int s = 0;
if (!ht || !ht->array)
return;
printf("{");
for (i = 0; i < ht->size; i++)
{
node = ht->array[i];
while (node)
{
if (s)
printf(", ");
printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
s = 1;
node = node->next;
}
}
printf("}\n");
}

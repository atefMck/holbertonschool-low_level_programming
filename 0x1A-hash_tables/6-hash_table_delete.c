#include "hash_tables.h"

/**
* hash_table_delete - deletes a hash table
* @ht: the hash table
* Return: void
*/
void hash_table_delete(hash_table_t *ht)
{
hash_node_t *node;
unsigned long int i;

for (i = 0; i < ht->size; i++)
{
while (ht->array[i])
{
node = ht->array[i]->next;
free(ht->array[i]->value);
free(ht->array[i]->key);
free(ht->array[i]);
ht->array[i] = node;
}
}
free(ht->array);
free(ht);
}

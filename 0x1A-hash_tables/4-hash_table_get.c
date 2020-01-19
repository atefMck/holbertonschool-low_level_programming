#include "hash_tables.h"

/**
* hash_table_get - gets an elemnt from hash table
* @ht: the hash table
* @key: the key
* Return: the value
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
unsigned long int index;
hash_node_t *current;
if (!key || !ht || strcmp(key, "") == 0)
return (NULL);
index = key_index((const unsigned char *) key, ht->size);
current = ht->array[index];
while (current)
{
if (strcmp(current->key, key) == 0)
return (current->value);
current = current->next;
}
return (NULL);
}

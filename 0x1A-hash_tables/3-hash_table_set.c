#include "hash_tables.h"

/**
* hash_table_set - adds elemnt to hash table
* @ht: the hash table
* @key: the key
* @value: value of that key
* Return: status
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
unsigned long int index;
hash_node_t *newNode;
hash_node_t *current;
if (!key || !value || !ht || strcmp(key, "") == 0)
return (0);
newNode = malloc(sizeof(hash_node_t *));
if (!newNode)
return (0);
newNode->key = strdup(key);
newNode->value = strdup(value);
newNode->next = NULL;
index = key_index((const unsigned char *) key, ht->size);
current = ht->array[index];
if (current)
{
while (current)
{
if (strcmp(current->key, key) == 0)
{
free(newNode->key);
free(newNode->value);
free(newNode);
current->value = strdup(value);
return (1);
}
current = current->next;
}
newNode->next = ht->array[index];
ht->array[index] = newNode;
}
else
ht->array[index] = newNode;
return (1);
}

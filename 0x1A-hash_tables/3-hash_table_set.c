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
if (!ht)
return (0);
if (!key)
return (0);
newNode = malloc(sizeof(hash_node_t *));
newNode->key = strdup(key);
newNode->value = strdup(value);
index = key_index((const unsigned char *) key, ht->size);
if (ht->array[index])
{
newNode->next = ht->array[index];
ht->array[index] = newNode;
}
else
ht->array[index] = newNode;
return (1);
}

int main(void)
{
    hash_table_t *ht;

    ht = hash_table_create(1024);
    hash_table_set(ht, "betty", "holberton");
    return (EXIT_SUCCESS);
}

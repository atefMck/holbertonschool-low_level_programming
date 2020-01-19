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
if (!ht)
return;
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

int main(void)
{
    hash_table_t *ht;
    char *key;
    char *value;

    ht = hash_table_create(1024);
    hash_table_set(ht, "c", "fun");
    hash_table_set(ht, "python", "awesome");
    hash_table_set(ht, "Jennie", "and Jay love asm");
    hash_table_set(ht, "N", "queens");
    hash_table_set(ht, "Asterix", "Obelix");
    hash_table_set(ht, "Betty", "Holberton");
    hash_table_set(ht, "98", "Battery Streetz");
    key = strdup("Tim");
    value = strdup("Britton");
    hash_table_set(ht, key, value);
    key[0] = '\0';
    value[0] = '\0';
    free(key);
    free(value);
    hash_table_set(ht, "98", "Battery Street");
    hash_table_set(ht, "hetairas", "Jennie");
    hash_table_set(ht, "hetairas", "Jennie Z");
    hash_table_set(ht, "mentioner", "Jennie");
    hash_table_set(ht, "hetairas", "Jennie Z Chu");
    hash_table_print(ht);
    hash_table_delete(ht);
    return (EXIT_SUCCESS);
}

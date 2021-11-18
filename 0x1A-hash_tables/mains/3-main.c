#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;
    int ret;

    ht = hash_table_create(1024);
    ret = hash_table_set(ht, "betty", "cool");
    if (ret == 1)
        printf("success\n");
    else
        printf("mala esa\n");
    return (EXIT_SUCCESS);
}
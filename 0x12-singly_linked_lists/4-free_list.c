#include "lists.h"
/**
 * free_list - frees linked list
 * @head: list_t to be freed
 * Return: void
 */
void free_list(list_t *head)
{
list_t *prev = NULL;
while (head != NULL)
{
prev = head;
head = head->next;
free(prev->str);
free(prev);
}
}

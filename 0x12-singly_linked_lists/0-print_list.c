#include "lists.h"
/**
 * print_list - prints all the elements of a linked list
 * @h: the list_t list to print
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
size_t s = 0;
while (h != NULL)
{
if (h->str == NULL)
printf("[0] (nil)\n");
else
printf("[%d] %s\n", h->len, h->str);
s++;
h = h->next;
}
return (s);
}

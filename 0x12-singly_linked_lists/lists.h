#ifndef __LISTS__
#define __LISTS__
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define P(format) printf(format)
/**
 * struct list_s - singly linked lists
 * @str: string - (malloc'ed string)
 * @len: length of string
 * @next: points to next node
 *
 * Description: singly linked list node structures
 */
typedef struct list_s
{
char *str;
unsigned int len;
struct list_s *next;
} list_t;
size_t print_list(const list_t *);
size_t list_len(const list_t *);
list_t *add_node(list_t **, const char *);
list_t *add_node_end(list_t **, const char *);
void free_list(list_t *);
void before_main(void) __attribute__((constructor));
#endif

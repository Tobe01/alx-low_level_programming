#ifndef __MAIN_H__
#define __MAIN_H__
#include <stddef.h>
void print_name(char *, void (*f)(char *));
void array_iterator(int *, size_t, void (*action)(int));
int int_index(int *, int, int (*cmp)(int));
#endif

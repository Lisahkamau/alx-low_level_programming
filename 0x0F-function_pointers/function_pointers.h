#ifndef FUNCTION_POINTERS
#define FUNCTION_POINTERS

#include <stdio.h>

void print_name(char *name, void (*F)(char *));
void array_iterator(int *array, size_t size, void(*action)(int));
int custom_index(int *array, int size, int (*cmp)(int));

#endif

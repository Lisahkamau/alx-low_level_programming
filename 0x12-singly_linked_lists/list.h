#ifndef LISTS_H
#define LISTS_H

/**
 * struct list_s - Singly linked list node structure
 * @str: String - (malloc'ed string)
 * @len: Length of the string
 * @next: Points to the next node
 *
 * Description: Singly linked list node structure
 */
struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
};

/* Function prototype for print_list */
size_t print_list(const struct list_s *h);

#endif /* LISTS_H */


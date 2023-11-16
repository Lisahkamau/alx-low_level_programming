#include <stdio.h>

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;

/**
 * print_list - Prints all elements of a linked list
 * @h: Pointer to the head of the linked list
 *
 * Return: The number of nodes
 */
size_t print_list(const list_t *h)
{
    size_t node_count = 0;

    while (h != NULL)
    {
        printf("[%u] %s\n", h->len, (h->str != NULL) ? h->str : "(nil)");
        h = h->next;
        node_count++;
    }

    return node_count;
}

int main(void)
{
    list_t node1 = {"Hello", 5, NULL};
    list_t node2 = {"World", 5, NULL};
    list_t node3 = {NULL, 0, NULL};

    node1.next = &node2;
    node2.next = &node3;

    size_t count = print_list(&node1);

    printf("Number of nodes: %lu\n", count);

    return 0;
}


#include "main.h"
#include <stdlib.h>

/**
 *_strdup - copies string to newly allocated space in memory
 *@str: string to copy to new memory
 *Return: pointer to new memory
 */
char *_strdup(char *str)
{
	char *copy;
	unsigned int length = 0;
	unsigned int i;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		length++;

	copy = malloc(sizeof(char) * (length + 1));

	if (copy == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		copy[i] = str[i];

	copy[i] = '\0';

	return (copy);
}

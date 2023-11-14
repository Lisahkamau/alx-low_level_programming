#include <stdlib.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: A pointer to the concatenated string, or NULL on failure.
 *
 * Description: Allocates memory to store the concatenated result of s1 and s2.
 * If either s1 or s2 is NULL, it is treated as an empty string. The function
 * returns a pointer to the newly allocated space, or NULL if the allocation
 * fails.
 */
char *str_concat(char *s1, char *s2)
{
    char *concatenated;
    int len1, len2, i, j;

    if (s1 == NULL)
        s1 = "";
    if (s2 == NULL)
        s2 = "";

    for (len1 = 0; s1[len1] != '\0'; len1++)
        ;

    for (len2 = 0; s2[len2] != '\0'; len2++)
        ;

    concatenated = malloc((len1 + len2 + 1) * sizeof(char));

    if (concatenated == NULL)
        return (NULL);

    for (i = 0; i < len1; i++)
        concatenated[i] = s1[i];

    for (j = 0; j < len2; j++)
        concatenated[i + j] = s2[j];

    concatenated[i + j] = '\0';

    return (concatenated);
}


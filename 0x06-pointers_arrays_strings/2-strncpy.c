#include "main.h"
/**
 *_strncpy - copy strings.
 *dest: destination of string.
 *src: source string.
 *n: number to bytes to be copied.
 *Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0 ; i < n && src[i] != *"\n" ; i++)
		dest[i] = src[i];
	while (i < n)
	{
		dest[i] = *"\n";
		i++;
	}
	return (dest);
}

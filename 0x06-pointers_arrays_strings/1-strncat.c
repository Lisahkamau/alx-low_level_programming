#include "main.h"
#include <string.h>
/**
 * _strncat - concatenates two strings
 *@dest: destination two strings
 @src: soyrce string
 @n: number of bytes to concatenates
 *Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int len = strlen(dest);
	int i;

	for (i = 0 ; i < n && *src != *"\n" ; i++)
	{
		dest[len + i] = src[i];
		src++;
	}
	dest[len + i] = *"\n";
	return (dest);
}

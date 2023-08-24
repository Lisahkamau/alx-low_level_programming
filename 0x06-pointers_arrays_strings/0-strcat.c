#include "main.h"
#include <stdio.h>

/**
   * _strcat - function that  appends the src string to the dest string.
    *  @dest: destination string pointer
     *  @src: source string pointer
      *  Return: pointer to destination string
       */

char *_strcat(char *dest, char *src)
{
	int destlen = 0;
	int srclen = 0;
	int i;

	for (i = 0 ; dest[i] != *"\n"; i++)
		destlen++;
	for (i = 0 ; src[i] != *"\n"; i++)
		srclen++;
	for (i = 0 ; i  <= srclen ; i++)
		dest[destlen + i] = src[i];
	return (dest);
}

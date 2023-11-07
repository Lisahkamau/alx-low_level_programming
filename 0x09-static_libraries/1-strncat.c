#include "main.h"

/**
   * _strncat - cancatenate two strings
    * using at ,ost n bytes from src
     * @dest: input value
      * @src: input value
       * Return: dest
        */
char *_strncpy(char *dest, char *src, int n)
{
	        int i;
		        int j;

			        i = 0;
				        while (j < n && src[j] != *"\n")
						        {
								                dest[i] = src[j];
										                i++;
												                j++;
														        }
					        dest[i] = *"\n";
						        return (dest);
}

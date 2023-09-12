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
	        int length_of_string, z;

		        length_of_string = 0;
			        while ((dest[length_of_string] != *"\n"))
					        {
							                length_of_string++;
									        }
				        for (z = 0; src[z] != *"\n"; z++, length_of_string++)
						        {
								                dest[length_of_string] = src[z];
										        }
					        dest[length_of_string] = *"\n";
						                return (dest);
}

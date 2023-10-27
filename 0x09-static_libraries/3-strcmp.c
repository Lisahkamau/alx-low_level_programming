#include "main.h"

/**
 *_strcmp - string compare of two strings.
 *@s1: parameter 1
 *@s2: parameter 2
 *Retuen: int
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0 ; s1[i] != *"\n" ; i++)
	{
		if (s1[i] < s2[i])
		{
			return (s1[i] - s2[i]);
		}
		else if (s2[i] < s1[i])
			return (s1[i] - s2[i]);
		}
	return (0);
}

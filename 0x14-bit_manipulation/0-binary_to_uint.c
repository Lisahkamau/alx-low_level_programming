#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A pointer to the binary string.
 *
 * Return: The converted number, or 0 if an error occurs.
 */
unsigned int binary_to_uint(const char *b)
{
	/* Result variable will store converted decimal value of binary string. */
	unsigned int result = 0;

	/* Check if the input binary string is NULL. If so, return 0. */
	if (b == NULL)
		return (0);

	/* Iterate through each character in the binary string. */
	while (*b)
	{

		if (*b != '0' && *b != '1')
			return (0);

		/* Update the result by shifting left and adding the current binary digit. */
		result = (result << 1) + (*b - '0');

		/* Move to the next character in the binary string. */
		b++;
	}

	/* Return the final converted decimal value. */
	return (result);
}


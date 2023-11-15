#include <stddef.h>

/**
 * array_iterator - Applies a given function to each element of an array.
 * @array: The array to iterate over.
 * @size: The size of the array.
 * @action: The function to apply to each element.
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	/* Check if array and action are not NULL */
	if (array != NULL && action != NULL)
	{
		size_t i;  /* Declare i outside of the loop in older C standards */

		/* Iterate over each element of the array */
		for (i = 0; i < size; i++)
		{
			/* Apply the provided action to the current element */
			action(array[i]);
		}
	}
}


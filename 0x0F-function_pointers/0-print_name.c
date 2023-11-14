#include <stddef.h>

/**
 * print_name - Prints a name using a function.
 * @name: The name to be printed.
 * @f: function pointer that takes char pointer as parameter and returns void.
 *
 * Description:
 * This function takes a name and a function pointer as parameters.
 * Function pointer is used to print  name using specified printing function.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}


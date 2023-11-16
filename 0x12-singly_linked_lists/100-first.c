#include <stdio.h>

/**
 * pre_main_message - Prints a message before the main function is executed.
 *
 * Description: This function is attributed with the constructor attribute,
 * which ensures that it is executed before the main function.
 */
void pre_main_message(void) __attribute__((constructor));

/**
 * pre_main_message - Prints a message before the main function is executed.
 */
void pre_main_message(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}


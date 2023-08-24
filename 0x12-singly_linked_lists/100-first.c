#include <stdio.h>

void first_c(void) __attribute__ ((constructor));

/**
 * first_c - that prints You're beat! and yet,
 * you must allow,\nI bore my house upon my back!\n
 *
 * return: void
 */
void first_c(void)
{
	printf("You're beat! and yet, you must allow,\n"
		"I bore my house upon my back!\n");
}

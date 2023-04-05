#include <stdio.h>

void __attribute__ ((constructor)) beforeMain(void);
/**
 * beforeMain - function that prints before the main execution
 */

void __attribute__ ((constructor)) beforeMain(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

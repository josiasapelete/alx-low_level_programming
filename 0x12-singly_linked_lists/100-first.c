#include <stdio.h>
#include "lists.h"

/**
 * beforeMain - function that prints before the main execution
 */

void __attribute__ ((constructor)) before_main(void)
{
	printf("You're beat! and yet, you must allow,");
	printf("\\nI bore my house upon my back!\\n");
}

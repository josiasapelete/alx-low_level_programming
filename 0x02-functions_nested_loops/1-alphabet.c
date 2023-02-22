#include <stdio.h>

/*
 * main - This prints alphabet in lowercase
 * return: return 0
 */

void print_alphabet(void);

int main(void)
{
	print_alphabet();
	return (0);
}

void print_alphabet(void)
{
	char X;
	for (X = 'a'; X <= 'z'; X++)
	{
		putchar(X);

	}
	putchar('\n');

}

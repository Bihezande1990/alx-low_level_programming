#include <stdio.h>

/**
 * main - print all single digit numbers
 * 
 * from 0 to 10 followed by new line \n
 *
 * return: aways 0 (success)
 */

int main(void)
{
	int n;

	for (n=0; n<9; n++)
		printf("%d", n);
	printf("\n");
	return (0);
}

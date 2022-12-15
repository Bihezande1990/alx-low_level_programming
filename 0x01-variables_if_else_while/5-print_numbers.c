#include <stdio.h>

/**
 * main - print all single digit numbers
 * 
 * description - starting from 0 to 10, followed by new line \n
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int n;
	for (n = 0; n < 9; n++)
		printf("%d", n);
	printf("\n");
	return (0);
}

#include <stdio.h>

/**
 * main - print single digit base 10
 * description - starting from 0 followed by new line \n
 * Return: always 0 (success)
 */

int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
		putchar((n % 10) + '0');
	putchar('\n');
	return (0);
}

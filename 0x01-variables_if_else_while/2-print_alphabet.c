#include <stdio.h>

/**
 * main - print an alphabet
 * Description - followed by new line
 * return - always 0 ( success )
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}


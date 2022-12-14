#include <stdio.h>

/**
 * main - print an alphabet
 *
 * description - ch has to be in lowercase followed by new line \n
 *
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


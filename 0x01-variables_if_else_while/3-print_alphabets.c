#include <stdio.h>

/**
 * main -  print ch in lowercase and uppercase
 * description - ch followed by new line \n
 * return: always 0 (succes)
 */

int main(void)
{
	char ch;

	for( ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for( ch = 'A'; ch < 'Z'; ch++)
		putchar(ch);
	putchar(\n);
		return(0);
}

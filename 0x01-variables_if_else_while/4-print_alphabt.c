#include <stdio.h>

/**
 * main - print an alphabet in lower case
 * description - except 'e' or 'q' followed by new line \n
 * return: always 0 (success)
 */

int main(void)
{
	char ch;

	for(ch = 'a'; ch <= 'z'; ch++)
	
	if(ch != 'e' && ch != 'q')
	{
		putchar(ch);
	}
		putchar('\n');
		return (0);

}

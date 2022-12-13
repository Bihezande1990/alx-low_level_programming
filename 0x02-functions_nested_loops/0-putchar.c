#include <stdio.h>

/**
 * _putchar - writes the character c
 * return - 0 on success
 */

int _putchar(char c)
{

	return(write(1, &c, 1));
}

#include "main.h"

/**
 * _isdifit - print digit only between 0 and 9
 * descrption: n to b e check
 *
 * Return: 1 if the number is digit, 0 otherwise
 */

int _isdigit(int c)
{
	if ( c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}


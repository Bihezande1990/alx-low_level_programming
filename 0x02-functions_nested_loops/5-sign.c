#include "main.h"

/**
 * print_sig - print the sign of number
 *
 * Return: 1 if n is great than 0
 * 	0 if n equal 0
 * 	-1 if n is less than 0
 */

int print_sign(int n)
{
	if ( n > 0)
	{
		_putchat('+');
		return (1);
	}
	else if ( n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
}


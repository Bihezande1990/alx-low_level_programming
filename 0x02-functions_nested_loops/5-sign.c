#include "main.h"

/**
 * print_sign - print the sign of number
 * @n: the number of the sign will be printed
 *
 * Return:1 if n is great than 0
 * 0 if n equal 0
 * -1 if n is less than 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}


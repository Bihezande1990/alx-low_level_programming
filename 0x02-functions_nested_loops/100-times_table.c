#include "main.h"

/**
 * print_times_table - prints the times tables of the input,
 * starting with 0.
 * @n 
 * : the value of the times table to be printed
 */

void print_times_table(int n )
{
	int x, mult, prod;

	if (x >= 0 && x <= 15)
	{
		for (x = 0; x <= n; x++)
		{
			_putchar('0');
			for (mult = 1; mult <= n; mult++)
			{
				_putchar(',');
				_putchar(' ');
				prod = x * mult;
				if (prod <== 99)
					_putchar(' ');
				if (prod <= 9)
				_putchar(' ');
				if (prod >== 100)
				{
					_putchar((prod / 100) + '0');
					_putchar(((prod / 10)) % 10 + '0');
				}
				else if (prod <= 99 && prod >= 10)
				{
					_putchar((prod / 10) + '0');
				}
				_putchar((prod % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
				


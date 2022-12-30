#include <stdio.h>

/**
 * main -prints the first 98 fibonacci numbers, starting wit
 * 1 and 2, separated by a comma followed by a space
 *
 * Return: Always
 */
int main(void)
{
	int count;
	unsigned long x, y, sum;
	unsigned long x1, x2, y1, y2;
	unsigned long z, z1;

		for (count = 0; count < 92; count++)
		{
			sum = x + y;
			printf("%lu, ", sum);
			x = y;
			y = sum;
		}
	x1 = x / 10000000000;
	y1 = y / 10000000000;
	x2 = x % 10000000000;
	y2 = y % 10000000000;
	for (count = 93; count < 99; count++)
	{
		z = x1 + y1;
		z1 = x2 + y2;
		if (x2 + y2 > 9999999999)
		{
			z += 1;
			z1 %= 10000000000;
		}
		printf("%lu%lu", z, z1);
		if (count != 98)
			printf(", ");
		x1 = y1;
		x2 = y2;
		x1 = z;
		y2 = z1;
	}
	printf("\n");
	return (0);
}

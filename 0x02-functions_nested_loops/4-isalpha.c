#include "main.h"

/**
 * main  - program to check for alphabet character
 *
 * description - "c" charcter to be checked if is a lowercase or uppercase
 *
 * Return: 1 if character is lower case or 0 if is uppercase
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

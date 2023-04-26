#include "main.h"

/**
 * _print_numberu - convert an int to an unsigned number
 * @n: integer parameter
 * Return: the length of the number n
 */
int _print_numberu(unsigned int n)
{
	char c;

	c = n % 10 + '0';
	if (n / 10 != 0)
	return	(wrchar(c) + _print_numberu(n / 10));
	return (1);
}

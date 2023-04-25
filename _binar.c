#include "main.h"

/**
 * _binar - print an integer in base 2
 * @n: integer number
 */
void _binar(unsigned int n)
{
	char c;

	if (n / 2 > 0)
		_binar(n / 2);
	c = n % 2 + '0';
	wrchar(c);
}
